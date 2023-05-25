/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    let nestedArrayElement = true;
    let queue;
    let depth = 0;

    while(nestedArrayElement && depth < n) {
        nestedArrayElement = false;
        queue = [];

        for(let i = 0; i < arr.length; i++) {
            if(Array.isArray(arr[i])) {
                queue.push(...arr[i]);
                nestedArrayElement = true;
            } else {
                queue.push(arr[i]);
            }
        }
        arr = [...queue];
        depth++;
    }
    
    return arr;
};