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

let p3dcnter = 0;
function Convert(inPath, textures)
{
    const repls = {};
    textures.forEach(x => repls[x] = "");
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

const rl = Convert(inPath, left);
const rr = Convert(cmpPath, right);

console.log(rl);
console.log(rr);
console.log((rl === rr) ? "equal" : "NOT THE SAME!");
