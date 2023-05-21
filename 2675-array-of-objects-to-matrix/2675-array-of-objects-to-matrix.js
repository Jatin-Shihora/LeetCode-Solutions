const flattenObject = (element, path, object, columns) => {
  if (element !== null && typeof element === 'object') {
    Object.entries(element).forEach(([key, value]) =>
      flattenObject(value, path + (path ? '.' : '') + key, object, columns)
    );
  } else {
    object[path] = element;
    columns.add(path);
  }
  return object;
};

var jsonToMatrix = function(arr) {
  const matrix = [];
  const columns = new Set();

  arr = arr.map((element) => flattenObject(element, '', {}, columns));
  matrix.push([...columns].sort());

  const columnsIndex = matrix[0].reduce((acc, cur, idx) => {
    acc[cur] = idx;
    return acc;
  }, {});

  arr.forEach((element) => {
    matrix.push(Array(columns.size).fill(''));
    Object.entries(element).forEach(([key, value]) => {
      matrix.at(-1)[columnsIndex[key]] = value;
    });
  });

  return matrix;
};
