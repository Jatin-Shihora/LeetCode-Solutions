/**
 * @param {Array} keysArr
 * @param {Array} valuesArr
 * @return {Object}
 */
var createObject = function(K, V, O = {}) {
    for(i in K)
        if(!O.hasOwnProperty(K[i]))
            O[K[i]] = V[i]
    return O
};