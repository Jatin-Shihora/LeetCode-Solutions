var jsonToMatrix = function (arr) {
  const colMap = new Map()
  const res = [[]]

    const sortCols = (matrix) => {
      // Copy the column names from the first row of the matrix and sort them using localeCompare
      const sortedColNames = matrix[0].slice().sort((a, b) => a.localeCompare(b));

      // Create a new sorted matrix based on the sorted column names
      const sortedMatrix = matrix.map((row) => {
        const sortedRow = [];
        for (let i = 0; i < sortedColNames.length; i++) {
          const colIndex = matrix[0].indexOf(sortedColNames[i]);
          sortedRow.push(row[colIndex]);
        }
        return sortedRow;
      });

      return sortedMatrix;
    };

  for (let i = 0; i < arr.length; i++) {
    const stack = [[arr[i], []]]
    res.push(Array(colMap.size).fill(""))

    while (stack.length > 0) {
      const [front, path] = stack.pop()

      if (typeof front === "object" && front !== null) {
        const keys = Object.keys(front)

        for (let j = keys.length - 1; j >= 0; j--) {
          stack.push([front[keys[j]], path.concat(keys[j])])
        }
      } else if (Array.isArray(front)) {
        for (let j = front.length - 1; j >= 0; j--) {
          stack.push([front[j], path.concat(j)])
        }
      } else {
        let pathStr = path.join('.')

        if (!colMap.has(pathStr)) {
          res[0].push(pathStr)
          colMap.set(pathStr, res[0].length - 1)

          for (let j = 1; j < res.length; j++) {
            res[j][res[0].length - 1] = ""
          }
        }

        let j = colMap.get(pathStr)
        res[i + 1][j] = front
      }
    }
  }

  return sortCols(res)
};