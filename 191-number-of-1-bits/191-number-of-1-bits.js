/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {
    let count=0;
    n = n.toString(2);
    for(let i of n){
        if(i==='1')count++;
    }
    return count;
};