/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
  const transformedArr = [];
  let index = 0;
  for (const element of arr) {
    transformedArr[index] = fn(element, index);
    index++;
  }
  return transformedArr;
};