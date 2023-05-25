type MultiDimensionalArray = (number | MultiDimensionalArray)[];

const flat = function (arr: MultiDimensionalArray, n: number): MultiDimensionalArray {
    const stack: [MultiDimensionalArray, number][] = arr.map((item) => [item, n] as [MultiDimensionalArray, number]);
    const res: MultiDimensionalArray = [];

    while (stack.length > 0) {
        const [item, depth] = stack.pop()!;
        if (Array.isArray(item) && depth > 0) {
            stack.push(...item.map((el) => [el, depth - 1] as [MultiDimensionalArray, number]));
        } else {
            res.push(item);
        }
    }

    return res.reverse();
};
