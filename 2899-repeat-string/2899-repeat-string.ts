declare global {
    interface String {
        replicate(times: number): string;
    }
}

String.prototype.replicate = function(times: number): string {
    const result: string[] = [];
    for (let i = 0; i < times; i++) {
        result.push(this);
    }

    return result.join('');
};