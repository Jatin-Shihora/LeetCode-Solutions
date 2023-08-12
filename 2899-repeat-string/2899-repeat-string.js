String.prototype.replicate = function(times) {
    if (times === 0) {
        return "";
    }
    return this + this.replicate(times - 1);
};