function deepFilter(obj, fn) {
    function dfs(node) {
        if (node === null) {
            if (fn(node)) return node;
            return undefined;
        }
        if (typeof node !== 'object') {
            if (fn(node)) return node;
            return undefined;
        }

        if (Array.isArray(node)) {
            const newArr = [];

            for (let i = 0; i < node.length; i++) {
                const curr = node[i];
                const subRes = dfs(curr);

                if (subRes !== undefined) {
                    newArr.push(subRes);
                }
            }

            if (newArr.length === 0) {
                return undefined;
            }

            return newArr;
        }

        const newObj = {};

        for (const key in node) {
            const subRes = dfs(node[key]);
            if (subRes !== undefined) {
                newObj[key] = subRes;
            }
        }

        if (Object.keys(newObj).length === 0) return undefined;

        return newObj;
    }

    return dfs(obj);
}
