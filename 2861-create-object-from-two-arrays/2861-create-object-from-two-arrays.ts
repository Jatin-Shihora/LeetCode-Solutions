function createObject(keysArr: (string | number | boolean)[], valuesArr: any[]): Record<string, any> {
    const obj: Record<string, any> = {};

    keysArr.forEach((key, index) => {
        if (typeof key !== 'string') {
            key = String(key);
        }

        if(!(key in obj)) {
            obj[key] = valuesArr[index];
        }
    });

    return obj;
}