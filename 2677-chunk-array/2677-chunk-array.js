/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
var chunk = function(arr, size) {
  const result = [];
  let currentChunk = [];

  for (const element of arr) {
    if (currentChunk.length === size) {
      result.push(currentChunk);
      currentChunk = [];
    }
    currentChunk.push(element);
  }

  if (currentChunk.length) result.push(currentChunk);
  return result;
};

