declare global {
    interface String {
        replicate(times: number): string;
    }
}

String.prototype.replicate = function(times: number) {
    if (times === 0) {
        return "";
    }
    return this + this.replicate(times - 1);
};