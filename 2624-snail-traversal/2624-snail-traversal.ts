declare global {
  interface Array<T> {
    snail(rowsCount: number, colsCount: number): number[][];
  }
}

Array.prototype.snail = function(rowsCount: number, colsCount: number): number[][] {
    // base case: wrong inputs
    if (rowsCount * colsCount !== this.length) return [];
    // support variables
    const res = Array.from({length: rowsCount}, () => Array.from({length: colsCount}) as number[]);
    let goingDown = true, x = 0, y = 0;
    // populating res
    for (const n of this) {
      res[y][x] = n;
      // updating the pointers
      if (goingDown) {
        y++;
        // end of the line
        if (y === rowsCount) y--, x++, goingDown = false;
      }
      else  {
        y--;
        // end of the line
        if (y < 0) y = 0, x++, goingDown = true;
      }
    }
    return res;
}
/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */