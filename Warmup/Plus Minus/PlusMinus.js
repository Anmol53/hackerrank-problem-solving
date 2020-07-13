'use strict';

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

// Complete the plusMinus function below.
function plusMinus(arr) {
    let n = 0, p = 0;
    let l = arr.length;
    for(let i = 0; i < l; i++){
        if(arr[i] > 0){
            p++;
        }
        if(arr[i] < 0){
            n++;
        }
    }
    let z = l - p - n;
    console.log(p / l);
    console.log(n / l);
    console.log(z / l);
}

function main() {
    const n = parseInt(readLine(), 10);

    const arr = readLine().split(' ').map(arrTemp => parseInt(arrTemp, 10));

    plusMinus(arr);
}
