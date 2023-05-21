var jsonToMatrix = function (arr) {
  const isObject = x => (x !== null && typeof x === 'object')

  const getKeys = (arg) => {
    if (!isObject(arg)) return ['']
    return Object.keys(arg).reduce((acc, curr) => {
      return (acc.push(...getKeys(arg[curr]).map(x => x ? `${curr}.${x}` : curr)), acc)
    }, [])
  }

  const keys = [...arr.reduce((acc, curr) => {
    getKeys(curr).forEach((k) => acc.add(k))
    return acc
  }, new Set())].sort()

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

  return arr.reduce((acc, curr) => {
    return (acc.push(keys.map(key => getValue(curr, key))), acc)
  }, [keys])
};