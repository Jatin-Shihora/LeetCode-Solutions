/**
 * @param {any} o1
 * @param {any} o2
 * @return {boolean}
 */
function helper(key, value) {
    if (value && typeof value === "object" && !Array.isArray(value))
        return Object.fromEntries(Object.entries(value).sort());
    else
        return value;
}

var areDeeplyEqual = function(o1, o2) {
    const stringifiedO1 = JSON.stringify(o1, helper);
    const stringifiedO2 = JSON.stringify(o2, helper);

    return stringifiedO1 === stringifiedO2;
};