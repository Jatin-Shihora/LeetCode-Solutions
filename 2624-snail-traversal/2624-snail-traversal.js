/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
  if (rowsCount * colsCount !== this.length) return [];
  let result = Array(rowsCount).fill().map(() => []);
  for (let row = 0; row < colsCount; row++) {
    for (let col = 0; col < rowsCount; col++) {
      if (row & 1) {
        result[rowsCount - col - 1].push(this[row * rowsCount + col]);
      } else {
        result[col].push(this[row * rowsCount + col]);
      }
    }
  }
  return result;
}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */