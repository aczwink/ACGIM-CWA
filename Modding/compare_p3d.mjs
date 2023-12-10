#!/usr/bin/env node
import { execSync } from "child_process";
import fs from "fs";
import path from "path";

const bindir = "/home/amir/Schreibtisch/acgimcwatmp/bin";

function ReadTexturesFromP3D(inPath)
{
    const stdout = execSync("./p3dEdit '" + inPath + "' json", { cwd: bindir, env: { "LD_LIBRARY_PATH": bindir }, encoding: "utf-8", maxBuffer: 10 * 1024 * 1024 });

    const parsed = JSON.parse(stdout).lods;
    const polygons = parsed.map(x => x.faces).filter(x => x.length !== 0);
    const flat = [].concat.apply([], polygons);
    const textures = flat.map(x => x.texturePath.toLowerCase());
    const unique = Array.from(new Set(textures));
    
    return unique;
}

function BuildReplMap(from, to)
{
    function Find(fileName)
    {
        const indices = [];
        for(let i = 0; i < from.length; i++)
        {
            if(path.basename(from[i].replace(/\\/g, "/")) === fileName)
                indices.push(i);
        }
        return indices;
    }
    
    function Filter(indices, target, filterFunc)
    {
        if(indices.length > 1)
            return indices.filter(i => filterFunc(from[i], target));
        return indices;
    }
    
    function FilterDataDir(src, tgt)
    {
        const p1 = src.split("\\");
        const p2 = tgt.split("\\");
        
        //console.log(p1, p2);
        
        if( (p1[0] === "data") || (p2[0] === "data") )
            return p1[0] === p2[0];
        return true;
    }
    
    function FilterSubDir(src, tgt)
    {
        console.log(src, tgt);
    }
    
    const dict = {};
    for(const t of to)
    {
        const base = path.basename(t.replace(/\\/g, "/"));
        const indices = Find(base);
        const filter1 = Filter(indices, t, FilterDataDir);
        const filter2 = Filter(filter1, t, FilterSubDir);
        const filtered = filter2;
        
        if(filtered.length === 1)
        {
            const bestIdx = filtered[0];
            const f = from[bestIdx];
            from.splice(bestIdx, 1);
            
            if(f === t)
                continue;
            //console.log("mapping", f, "to", t);
            dict[f] = t;
        }
        else
        {
            const customMapData = fs.readFileSync("custom.json", "utf-8");
            const customMap = JSON.parse(customMapData);
            
            if(t in customMap)
            {
                const f = customMap[t];
                
                const bestIdx = from.indexOf(f);
                from.splice(bestIdx, 1);
                
                if(f === t)
                    continue;
                console.log("CUSTOM mapping", f, "to", t);
                dict[f] = t;
            }
            else
            {
                console.log(indices.map(i => from[i]));
                throw new Error("Can't find replacement for: " + t);
            }
        }
    }
    return dict;
}

let p3dcnter = 0;
function Convert(inPath, repls)
{    
    const replPath = path.resolve("repl.json");
    fs.writeFileSync(replPath, JSON.stringify(repls), "utf-8");
    
    //execSync("./p3dEdit '" + inPath + "' replace-textures '" + replPath + "' > __tmp_" + p3dcnter + ".p3d", { cwd: bindir, env: { "LD_LIBRARY_PATH": bindir }, encoding: "utf-8" });
    //p3dcnter++;
    
    const result = execSync("./p3dEdit '" + inPath + "' replace-textures '" + replPath + "' | md5sum", { cwd: bindir, env: { "LD_LIBRARY_PATH": bindir }, encoding: "utf-8" });
    fs.unlinkSync(replPath);
    
    return result.trim();
}

const inPath = path.resolve(process.argv[2]);
const cmpPath = path.resolve(process.argv[3]);

const left = ReadTexturesFromP3D(inPath);
const right = ReadTexturesFromP3D(cmpPath);
const res = BuildReplMap(left, right);

const rl = Convert(inPath, res);
const rr = Convert(cmpPath, {}); //simply read in and write the file once, to make sure same compression is used

console.log(rl);
console.log(rr);
console.log((rl === rr) ? "equal" : "NOT THE SAME!");
