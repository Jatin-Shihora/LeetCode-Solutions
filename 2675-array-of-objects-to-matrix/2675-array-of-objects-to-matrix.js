var jsonToMatrix = function (arr) {
  const isObject = x => (x !== null && typeof x === 'object')

  const getKeys = (object) => {
    const isObject = x => (x !== null && typeof x === 'object')
    if (!isObject(object)) return [''];
    const result = [];
    for (const key of Object.keys(object)) {
      const childKeys = getKeys(object[key]);
      for (const childKey of childKeys) {
        result.push(childKey ? `${key}.${childKey}` : key);
      }
    }  
    return result;
  }

  const keysSet = arr.reduce((acc, curr) => {
  getKeys(curr).forEach((k) => acc.add(k));
  return acc;
  }, new Set());

  const keys = Array.from(keysSet).sort();

  const getValue = (obj, path) => {
    const paths = path.split('.')
    let i = 0;
    let value = obj
    while (i < paths.length) {
      if (!isObject(value)) break;
      value = value[paths[i++]]
    }
    if (i < paths.length || isObject(value) || value === undefined) return ''
    return value
  }

  const matrix = [keys]
  arr.forEach(obj => {
    matrix.push(keys.map(key => getValue(obj, key)))
  })

  return matrix
};