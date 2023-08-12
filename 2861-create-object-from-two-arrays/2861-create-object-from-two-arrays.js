var createObject = function(keysArr, valuesArr) {
    const obj = {};
    keysArr.forEach((key, index) => {
        if (!(key in obj)) {
            obj[key] = valuesArr[index];
        }
    });
    return obj;
};