var cycleGenerator = function* (arr, startIndex) {
    while (true) {
        const jump = yield arr.at(startIndex % arr.length);
        startIndex += jump;
    }
}
