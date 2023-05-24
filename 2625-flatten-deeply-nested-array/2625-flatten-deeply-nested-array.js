/**
 * @param {any[]} arr
 * @param {number} depth
 * @return {any[]}
 */
var flat = function (arr, n) {
	const stack = [...arr.map((item) => [item, n])];
	const flatArray = [];
	
	while (stack.length > 0) {
		const [item, depth] = stack.pop();
		if (Array.isArray(item) && depth > 0) {
			// push back with depth - 1
			stack.push(...item.map((el) => [el, depth - 1]));
		} else {
			flatArray.push(item);
		}
	}

	return flatArray.reverse();
};