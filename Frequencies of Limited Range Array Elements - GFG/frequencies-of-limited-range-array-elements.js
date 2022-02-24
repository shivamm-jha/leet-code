// { Driver Code Starts
//Initial Template for javascript


'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let N = parseInt(readLine());
        let arr=readLine().trim().split(" ").map((x) => parseInt(x));
        let P = parseInt(readLine());
        let obj = new Solution();
        obj.frequencyCount(arr,N,P);
        let s = "";
        for(let it of arr){
            s+=it+" ";
        }
        console.log(s);
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} N
 * @param {number} P
*/

class Solution {
    frequencyCount(arr,n,p){
       //code here
       let hash = new Array(n);
       for(let i=0;i<n;i++){
           hash[i]=0;
       }
       
       for(let i =0;i<n;i++){
           hash[arr[i]-1]++;
       }
    //   for(let i of hash){
    //       console.log(i);
    //   }
       
       for(let i=0;i<n;i++){
           arr[i]=hash[i];
       }
       
    }
}