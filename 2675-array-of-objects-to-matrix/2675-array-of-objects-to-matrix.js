/**
 * @param {Array} arr
 * @return {Matrix}
 */
var jsonToMatrix = function(arr) {
  const colMap = new Map()
  const res = [[]]

  const sortCols = (matrix) => {
    const sortedColNames = matrix[0].sort((a, b) => a.localeCompare(b))
    const copyMatrix = [[]]

    for (let i = 1; i < matrix.length; i++) {
      copyMatrix[i] = matrix[i].slice()
    }

    for (let i = 0; i < matrix[0].length; i++) {
      let oldCol = colMap.get(sortedColNames[i])

      if (oldCol === i) {
        continue
      }

      for (let j = 1; j < matrix.length; j++) {
        matrix[j][i] = copyMatrix[j][oldCol]
      }
    }

    return matrix
  }

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