/** 
 * @param {number} target
 * @return {number}
 */
Array.prototype.upperBound = function(target) {
    let left = 0;
    let right = this.length - 1;
    let result = -1; // Initialize result as -1 to handle cases where target is not found

    while (left <= right) {
        const mid = left + ((right - left) >> 1);

        if (this[mid] === target) {
            result = mid; // Update result to store the current index
            left = mid + 1; // Continue searching in the right half for the last occurrence
        } else if (this[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
};


// [3,4,5].upperBound(5); // 2
// [1,4,5].upperBound(2); // -1
// [3,4,6,6,6,6,7].upperBound(6) // 5