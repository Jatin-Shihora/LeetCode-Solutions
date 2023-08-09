declare global {
    interface Array<T> {
        upperBound(target: number): number;
    }
}

Array.prototype.upperBound = function(target: number): number {
    let result = -1;

    this.forEach((val, ind) => {
        if (val === target) {
            result = ind;
        }
    });

    return result;
};
