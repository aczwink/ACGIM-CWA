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
    const textures = flat.map(x => x.texturePath);
    const unique = Array.from(new Set(textures));
    
    return unique;
}

const inPath = path.resolve(process.argv[2]);

const texts = ReadTexturesFromP3D(inPath);
texts.sort();
console.log(texts.join("\n"));
console.log("count:", texts.length);
