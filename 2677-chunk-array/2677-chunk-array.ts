/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array[]}
 */
function chunk(arr: any[], size: number): any[][] {
  let chunkedArray: any[][] = [[]];
  let temp: any[] = [];

  for (let i = 0; i < arr.length; i = i + size) {
    for (let j = 0; j < size; j++) {
      temp[j] = arr[j + i];
      if (j + i === arr.length) {
        temp.splice(j);
        break;
      }
    }
    chunkedArray = [...chunkedArray, [...temp]];
  }

  return chunkedArray.slice(1);
}
