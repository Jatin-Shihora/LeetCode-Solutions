/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
  return arr.reduce((transformedArr, element, index) => {
    transformedArr[index] = fn(element, index);
    return transformedArr;
  }, []);
};