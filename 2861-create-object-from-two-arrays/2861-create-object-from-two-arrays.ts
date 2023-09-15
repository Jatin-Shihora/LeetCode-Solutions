function createObject(keysArr: string[], valuesArr: any[]): Record<string, any> {
    const obj: Record<string, any> = {};
    for (let i = 0; i < keysArr.length; i++) {
        if (!obj.hasOwnProperty(keysArr[i])) {
            obj[keysArr[i]] = valuesArr[i];
        }
    }
    return obj;
}
