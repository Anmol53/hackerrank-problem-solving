'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(str => str.trim());

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the timeConversion function below.
 */
function timeConversion(s) {
    /*
     * Write your code here.
     */
    let hh = (10 * (s[0] - '0')) + (s[1] - '0');
    if(s[8] == 'P' && hh < 12){
        hh += 12;
    }
    else if(s[8] == 'A' && hh == 12){
        hh = 0;
    }
    return "" + Math.floor(hh / 10) + (hh % 10) + s.slice(2, 8);
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const s = readLine();

    let result = timeConversion(s);

    ws.write(result + "\n");

    ws.end();
}
