function createObject(keysArr: string[], valuesArr: any[]): Record<string, any> {
    const obj: Record<string, any> = {};
    for (const i in keysArr) {
        if (!obj.hasOwnProperty(keysArr[i])) {
            obj[keysArr[i]] = valuesArr[i];
        }
    }
    return obj;
}
