var jsonToMatrix = function(arr) {
  const columnMap = new Map();
  const result = [[]];

  const sortColumns = (matrix) => {
    const sortedColumnNames = matrix[0].sort((a, b) => a.localeCompare(b));
    const copyMatrix = [[]];
    for (let i = 1; i < matrix.length; i++) {
      copyMatrix[i] = matrix[i].slice();
    }

    for (let i = 0; i < matrix[0].length; i++) {
      const oldColumn = columnMap.get(sortedColumnNames[i]);
      if (oldColumn === i) {
        continue;
      }
      for (let j = 1; j < matrix.length; j++) {
        matrix[j][i] = copyMatrix[j][oldColumn];
      }
    }
    return matrix;
  };

  for (let i = 0; i < arr.length; i++) {
    const stack = [[arr[i], []]];
    result.push(Array(columnMap.size).fill(''));
    while (stack.length > 0) {
      const [front, path] = stack.pop();
      if (typeof front === 'object' && front !== null) {
        const keys = Object.keys(front);
        for (let j = keys.length - 1; j >= 0; j--) {
          stack.push([front[keys[j]], path.concat(keys[j])]);
        }
      } else if (Array.isArray(front)) {
        for (let j = front.length - 1; j >= 0; j--) {
          stack.push([front[j], path.concat(j)]);
        }
      } else {
        const pathStr = path.join('.');
        if (!columnMap.has(pathStr)) {
          result[0].push(pathStr);
          columnMap.set(pathStr, result[0].length - 1);
          for (let j = 1; j < result.length; j++) {
            result[j][result[0].length - 1] = '';
          }
        }
        const j = columnMap.get(pathStr);
        result[i + 1][j] = front;
      }
    }
  }

  return sortColumns(result);
};
