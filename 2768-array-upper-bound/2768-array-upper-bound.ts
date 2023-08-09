declare global {
    interface Array<T> {
        upperBound(target: number): number;
    }
}

Array.prototype.upperBound = function(target: number): number {
    let left = 0;
    let right = this.length - 1;
    let result = -1;

    while (left <= right) {
        const mid = left + ((right - left) >> 1);

        if (this[mid] === target) {
            result = mid;
            left = mid + 1;
        } else if (this[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
};
