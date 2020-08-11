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
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the climbingLeaderboard function below.
function climbingLeaderboard(al1, al2) {
    al1 = [...new Set(al1)];
    console.log(al1);
    let sz1 = al1.length;
    let sz2 = al2.length;
    let i = sz1 - 1, j = 0;
    let al3 = [];
    for(; (j < sz2) && (i >= 0); i--){
        if(al1[i] > al2[j]){
            al3.push(i + 2);
            i++;
            j++;
        }
        else if(al1[i] === al2[j]){
            al3.push(i + 1);
            i++;
            j++;
        }
    }
    while(j++ < sz2){
        al3.push(1);
    }
    return al3;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const scoresCount = parseInt(readLine(), 10);

    const scores = readLine().split(' ').map(scoresTemp => parseInt(scoresTemp, 10));

    const aliceCount = parseInt(readLine(), 10);

    const alice = readLine().split(' ').map(aliceTemp => parseInt(aliceTemp, 10));

    let result = climbingLeaderboard(scores, alice);

    ws.write(result.join("\n") + "\n");

    ws.end();
}
