/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
    let nested_array_element = true;
    let depth = 0;

    while(nested_array_element && depth < n) {
        nested_array_element = false;
        queue = [];

        for(let i = 0; i < arr.length; i++) {
            if(Array.isArray(arr[i])) {
                queue.push(...arr[i]);
                nested_array_element = true;
            } else {
                queue.push(arr[i]);
            }
        }
        arr = [...queue];
        depth++;
    }
    
    return arr;
};