/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
  return arr.map((value, index) => {
    if (fn(value, index)) {
      return value;
    }
  }).reduce((result, value) => {
    if (value !== undefined) {
      result.push(value);
    }
    return result;
  }, []);
};