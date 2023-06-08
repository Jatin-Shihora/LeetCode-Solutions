Array.prototype.snail = function(rowsCount, colsCount) {
    // base case: wrong inputs
    if (rowsCount * colsCount !== this.length) return [];
    // support variables
    let res = Array(rowsCount).fill().map(() => []);
    let goingDown = true, x = 0, y = 0;
    // populating res
    for (const n of this) {
        res[y][x] = n;
        // updating the pointers
        if (goingDown) {
            y++;
            // end of the line
            if (y === rowsCount) {
                y--;
                x++;
                goingDown = false;
            }
        } else {
            y--;
            // end of the line
            if (y < 0) {
                y = 0;
                x++;
                goingDown = true;
            }
        }
    }
    return res;
};