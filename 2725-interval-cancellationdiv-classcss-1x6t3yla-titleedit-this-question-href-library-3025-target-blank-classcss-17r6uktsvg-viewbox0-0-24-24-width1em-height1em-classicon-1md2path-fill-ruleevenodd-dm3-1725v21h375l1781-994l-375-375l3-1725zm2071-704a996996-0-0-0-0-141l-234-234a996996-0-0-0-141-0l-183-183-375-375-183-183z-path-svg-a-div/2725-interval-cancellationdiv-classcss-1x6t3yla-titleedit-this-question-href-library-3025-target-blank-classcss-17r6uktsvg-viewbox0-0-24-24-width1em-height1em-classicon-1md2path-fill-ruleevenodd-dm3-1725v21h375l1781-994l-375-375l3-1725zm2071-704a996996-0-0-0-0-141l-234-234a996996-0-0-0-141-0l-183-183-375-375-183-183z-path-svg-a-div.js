/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {
    let isCancelled = false;
    fn(...args);
    const startInterval = () => {
        setTimeout(() => {
            if (isCancelled) return;
            fn(...args);
            startInterval();
        }, t);
    }
    startInterval();
    const cancelInterval = () => {
        isCancelled = true;
    }

    return cancelInterval;
};