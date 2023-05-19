/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
var areDeeplyEqual = function(o1, o2) {
  const isDeepEqual = (a, b) => {
    if (a === b) return true;

    if (typeof a !== 'object' || typeof b !== 'object') return false;

    if (Array.isArray(a) !== Array.isArray(b)) return false;

    const keysA = Object.keys(a);
    const keysB = Object.keys(b);

    if (keysA.length !== keysB.length) return false;

    for (const key of keysA) {
      if (!isDeepEqual(a[key], b[key])) return false;
    }

    return true;
  };

  return isDeepEqual(o1, o2);
};