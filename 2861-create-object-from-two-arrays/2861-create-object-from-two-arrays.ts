function createObject(keysArr: (string | number | boolean)[], valuesArr: any[]): Record<string, any> {
    const obj: Record<string, any> = {};
    const addedKeys: Set<string> = new Set();

    keysArr.forEach((key, index) => {
        // Convert non-string keys to strings
        if (typeof key !== 'string') {
            key = String(key);
        }

        if (!addedKeys.has(key)) {
            addedKeys.add(key);
            obj[key] = valuesArr[index];
        }
    });

    return obj;
}
