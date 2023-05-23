/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
  return Array.from({ length: Math.ceil(arr.length / size) }, function(_, index) {
    return arr.slice(index * size, index * size + size);
  });
};

