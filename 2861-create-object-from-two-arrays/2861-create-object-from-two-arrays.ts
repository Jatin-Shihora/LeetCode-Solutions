function createObject(keysArr: any[], valuesArr: any[]): Record<string, any> {
    const O: Record<string, any> = {}
    keysArr.forEach((key, index) => {
        if (!O.hasOwnProperty(key)) {
            O[key] = valuesArr[index];
        }
    });

    return O;
}
