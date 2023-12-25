/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {
    fn(...args);
    const timer = setInterval(() => fn(...args), t);

    const cancelFn = () => clearInterval(timer);
    return cancelFn;
};