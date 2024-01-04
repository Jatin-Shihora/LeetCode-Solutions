var cycleGenerator = function* (arr, startIndex) {
  let index = startIndex;
  while (true) {
    const jump = yield arr[index];
    index = (index + arr.length + jump % arr.length) % arr.length;
  }
}