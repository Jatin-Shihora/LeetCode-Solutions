function jsonStringify(object) {
    return typeof object === 'string' ? '"' + object + '"' :
        object === null || typeof object !== 'object' ? object :
        Array.isArray(object) ? '[' + object.reduce((acc, x) => acc + jsonStringify(x) + ',', '').slice(0, -1) + ']' :
        '{' + Object.entries(object).reduce((acc, x) => acc + jsonStringify(x[0]) + ':' + jsonStringify(x[1]) + ',', '').slice(0, -1) + '}';
};

