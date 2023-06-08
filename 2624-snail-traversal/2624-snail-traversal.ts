declare global {
  interface Array<T> {
    snail(rowsCount: number, colsCount: number): number[][];
  }
}

Array.prototype.snail = function(rowsCount: number, colsCount: number): number[][] {
  // base case
  if (rowsCount * colsCount !== this.length) return [];
  // support variable
  let result: number[][] = Array(rowsCount).fill([]).map(() => []);
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
