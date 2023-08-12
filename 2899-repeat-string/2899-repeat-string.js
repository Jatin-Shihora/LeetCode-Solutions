String.prototype.replicate = function(times) {
    let result = "";
    for (let i = 0; i < times; i++) {
        result += this;
    }
    return result;
};