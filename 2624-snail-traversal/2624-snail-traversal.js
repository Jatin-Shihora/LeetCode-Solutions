Array.prototype.snail = function(rowsCount, colsCount) {
  // base case
  if (rowsCount * colsCount !== this.length) return [];
  // support variable
  let result = Array(rowsCount).fill().map(() => []);
  // populating res
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