function chunk(arr: any[], size: number): any[][] {
  const chunkedArray: any[][] = [];
  let index = 0;

  while (index < arr.length) {
    let count = size;
    const temp: any[] = [];

    while (count-- > 0 && index < arr.length) {
      temp.push(arr[index]);
      index++;
    }

    chunkedArray.push(temp);
  }

  return chunkedArray;
}
