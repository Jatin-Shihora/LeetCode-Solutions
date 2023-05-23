/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
function chunk(arr: any[], size: number): any[][] {
  const result: any[][] = [];
  let currentChunk: any[] = [];

  for (const element of arr) {
    if (currentChunk.length === size) {
      result.push(currentChunk);
      currentChunk = [];
    }
    currentChunk.push(element);
  }

  if (currentChunk.length) result.push(currentChunk);
  return result;
}
