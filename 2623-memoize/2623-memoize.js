/**
 * @param {Function} fn
 */
function memoize(fn) {
  const cacheObject = {};
  return function(...args) {
    const key = JSON.stringify(args);
    if (key in cacheObject) {
      return cacheObject[key];
    } else {
      const result = fn(...args);
      cacheObject[key] = result;
      return result;
    }
  }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */