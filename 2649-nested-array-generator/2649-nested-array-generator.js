/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
    for (let i = 0; i < arr.length; i++) {
        let element = arr[i];
        if (Array.isArray(element)) {
            yield* inorderTraversal(element);
        } else {
            yield element;
        }
    }
};
/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */