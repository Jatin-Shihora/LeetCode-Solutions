Array.prototype.snail = function(rowsCount, colsCount) {
    // base case
    if(this.length !==  rowsCount * colsCount) return [];
    // support variable
    let result = Array(rowsCount).fill([]).map(() => []);
   // populating res
    for(let j = 0; j < this.length; j++){
        const i = Math.floor(j / rowsCount);
        if(i % 2 === 0){
            result[j % rowsCount][i] = this[j];
        }else{
            result[rowsCount - j % rowsCount - 1][i] = this[j];
        }
    }
    return result;
}