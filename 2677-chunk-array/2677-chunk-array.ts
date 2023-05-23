/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
function chunk(arr: any[], size: number): any[][] {
  return Array.from({ length: Math.ceil(arr.length / size) }, function(_: any, index: number) {
    return arr.slice(index * size, index * size + size);
  });
}
