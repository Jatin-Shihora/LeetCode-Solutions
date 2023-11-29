/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {
    let timerId = null;
    fn(...args);

    const startInterval = () => {
        timerId = setTimeout(() => {
            fn(...args);
            startInterval();
        }, t);
    };
    startInterval();

    const cancelInterval = () => {
        if (timerId !== null) { // not totally needed as clearTimeout is very forgiving fn
            clearTimeout(timerId);
        }
    };

    return cancelInterval;
};