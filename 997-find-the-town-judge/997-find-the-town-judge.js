/**
 * @param {number} N
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function(n, trust) {
    const Trusted = new Array(n+1).fill(0);
    
    for(let [i,j] of trust) {
        Trusted[i] -= 1
        Trusted[j] += 1
    }

    for(let i = 1; i < Trusted.length; i++) {
        if ((n-1) === Trusted[i]) {
            return i;
        }
    }
    
    return -1
};