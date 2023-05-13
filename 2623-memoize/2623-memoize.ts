type Fn = (...params: any) => any

function memoize(fn: Fn): Fn {
  const cacheObject = {};
  return function(...args) {
    const key = JSON.stringify(args);
    if (key in cacheObject) {
      return cacheObject[key];
    }else{
    const functionOutput = fn(...args);
    cacheObject[key] = functionOutput;
    return functionOutput;
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