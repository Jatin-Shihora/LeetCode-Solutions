/**
 * @param {Function} fn
 * @return {Function}
 */
var curry = function(fn) {
 return function curried(...args) {
    if (args.length < fn.length) {
      return function(...args2) {
        return curried(...args, ...args2);
      }
    }
    return fn(...args);
  };
};

/**
 * function sum(a, b) { return a + b; }
 * const csum = curry(sum);
 * csum(1)(2) // 3
 */
