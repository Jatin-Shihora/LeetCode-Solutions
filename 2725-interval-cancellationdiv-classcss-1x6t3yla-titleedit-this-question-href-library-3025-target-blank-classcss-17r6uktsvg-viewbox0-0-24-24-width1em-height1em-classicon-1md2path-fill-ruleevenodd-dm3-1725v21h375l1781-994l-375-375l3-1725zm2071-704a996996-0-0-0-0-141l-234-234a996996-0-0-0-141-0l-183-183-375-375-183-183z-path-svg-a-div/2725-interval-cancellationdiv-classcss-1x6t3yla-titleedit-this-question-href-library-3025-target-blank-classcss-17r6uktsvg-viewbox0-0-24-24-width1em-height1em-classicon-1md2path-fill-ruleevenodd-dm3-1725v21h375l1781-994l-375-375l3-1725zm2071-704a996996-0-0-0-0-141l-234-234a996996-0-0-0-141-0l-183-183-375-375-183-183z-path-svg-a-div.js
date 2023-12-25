/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {
fn(...args);
let timer = setInterval(() => fn(...args), t);

let cancelFn = () => clearInterval(timer);
return cancelFn;
};