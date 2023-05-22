/**
 * @param {Array} arr
 * @return {Matrix}
 */
function* getNestedColumn(obj, prefixes = []) {
    if (obj != null && Array.isArray(obj)) {
        for (let key = 0; key < obj.length; key += 1) {
            prefixes.push(key);
            yield* getNestedColumn(obj[key], prefixes);
            prefixes.pop()
        }
    } else if (obj != null && typeof obj === 'object') {
        for (const key of Object.keys(obj)) {
            prefixes.push(key);
            yield* getNestedColumn(obj[key], prefixes);
            prefixes.pop()
        }  
    } else if (prefixes.length > 0) {
        yield [prefixes.join('.'), obj];
    }
}

var jsonToMatrix = function(arr) {
    const output = new Array(arr.length + 1).fill(null).map(() => []);
    const rows = new Array(arr.length).fill(null).map(() => new Map());
    const uniqueColumns = new Set();
    for (let row = 0; row < arr.length; row += 1) {
        for (const [key, value] of getNestedColumn(arr[row])) {
            rows[row].set(key, value);
            uniqueColumns.add(key);
        }
    }

    const columns = [...uniqueColumns].sort();
    output[0] = columns;
    for (let row = 0; row < arr.length; row += 1) {
        for (const col of columns) {
            if (rows[row].has(col)) {
                output[row + 1].push(rows[row].get(col))
            } else {
                output[row + 1].push('')
            }
        }
    }

    return output;
};