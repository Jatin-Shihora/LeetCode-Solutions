/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let prev1 = 0;
    let prev2 = 1;

    while(true) {
        yield prev1;
        const temp = prev1;
        prev1 = prev2;
        prev2 += temp;
    }
};


/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */