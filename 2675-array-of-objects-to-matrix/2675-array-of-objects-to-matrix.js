var jsonToMatrix = function(arr) {
  const isObject = (element) => element instanceof Object;

  const getSubMap = (obj) => {
    const map = new Map();
    const setMap = (elem, preKey) => {
      if (!isObject(elem)) {
        map.set(preKey, elem);
        return;
      }

      const subMap = getSubMap(elem);
      for (const entry of subMap.entries()) {
        const symbol = `${preKey}.${entry[0]}`;
        map.set(symbol, entry[1]);
      }
    };

    if (Array.isArray(obj)) {
      for (let i = 0; i < obj.length; i++) {
        setMap(obj[i], `${i}`);
      }
    } else {
      for (const key of Object.keys(obj)) {
        setMap(obj[key], key);
      }
    }

    return map;
  };

  const subMap = getSubMap(arr);
  const columnSet = new Set();

  for (const key of subMap.keys()) {
    const i = key.indexOf('.');
    const symbol = key.slice(i + 1);
    columnSet.add(symbol);
  }

  const columnKeys = [...columnSet].sort((a, b) => (a < b ? -1 : 1));
  const len = arr.length;
  const matrix = [columnKeys];

  for (let i = 1; i <= len; i++) {
    if (columnKeys.length === 0) {
      matrix[i] = [];
      continue;
    }

    for (let j = 0; j < columnKeys.length; j++) {
      const key = `${i - 1}.${columnKeys[j]}`;
      if (!matrix[i]) {
        matrix[i] = [];
      }
      matrix[i][j] = subMap.has(key) ? subMap.get(key) : '';
    }
  }

  return matrix;
};
