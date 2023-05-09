/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
  return arr.reduce((result, value, index) => {
    if (fn(value, index)) {
      result.push(value);
    }
    return result;
  }, []);
};