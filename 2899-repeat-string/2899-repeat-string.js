String.prototype.replicate = function(times) {
    const result = [];
    for (let i = 0; i < times; i++) {
        result.push(this);
    }

    return result.join('');
};
