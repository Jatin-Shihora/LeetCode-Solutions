/**
 * @param {Array} arr
 * @return {Matrix}
 */
var jsonToMatrix = function (arr) {
  const isObject = elem => elem instanceof Object

  const getSub = (obj) => {
    const map = new Map()

    const setMap = (elem, preKey) => {
      if (!isObject(elem)) {
        map.set(preKey, elem)
        return
      }

      const subMap = getSub(elem)
      for (const entry of subMap.entries()) {
        const symbol = `${preKey}.${entry[0]}`
        map.set(symbol, entry[1])
      }
    }

    if (Array.isArray(obj)) {
      for (let i = 0; i < obj.length; i++) {
        setMap(obj[i], `${i}`)
      }
    } else {
      for (const key of Object.keys(obj)) {
        setMap(obj[key], key)
      }
    }

    return map
  }

  const map = getSub(arr)
  const set = new Set()

  for (const key of map.keys()) {
    const i = key.indexOf('.')
    const symbol = key.slice(i + 1)
    set.add(symbol)
  }

  const keys = [...set].sort((a, b) => a < b ? -1 : 1)
  const len = arr.length
  const matrix = [keys]

  for (let i = 1; i <= len; i++) {
    if (keys.length === 0) {
      matrix[i] = []
      continue
    }

    for (let j = 0; j < keys.length; j++) {
      const key = `${i - 1}.${keys[j]}`
      if (!matrix[i]) {
        matrix[i] = []
      }
      matrix[i][j] = map.has(key) ? map.get(key) : ""
    }
  }

  return matrix
};