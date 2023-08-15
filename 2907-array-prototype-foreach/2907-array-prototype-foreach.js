/**
 * @param {Function} callback
 * @param {Context} context
 */
Array.prototype.forEach = function(callback, context) {
    const self = this; // Capture the value of 'this'
    
    function forEachRecursive(index) {
        if (index === self.length) {
            return;
        }
        callback.call(context, self[index], index, self); // Use 'self' instead of 'this'
        forEachRecursive(index + 1);
    }

    forEachRecursive(0);
};

/**
 *  const arr = [1,2,3];
 *  const callback = (val, i, arr) => arr[i] = val * 2;
 *  const context = {"context":true};
 *
 *  arr.forEach(callback, context)  
 *
 *  console.log(arr) // [2,4,6]
 */