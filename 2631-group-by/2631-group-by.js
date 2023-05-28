/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
  return this.reduce((accum, item) => {
    const key = fn(item);
    accum[key] ||= [];
    accum[key].push(item);
    return accum;
  }, {});
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */