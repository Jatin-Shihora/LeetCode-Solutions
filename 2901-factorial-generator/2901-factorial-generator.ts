function* factorial(n: number): Generator<number> {
    const memo = new Map<number, number>(); // Memoization cache
    
    function factorialRecursive(n: number): number {
        if (memo.has(n)) {
            return memo.get(n) as number;
        }

        let result: number;
        if (n <= 1) {
            result = 1;
        } else {
            result = n * factorialRecursive(n - 1);
        }

        memo.set(n, result);
        return result;
    }
    
    if (n === 0) {
        yield 1;
    } else {
        for (let i = 1; i <= n; i++) {
            yield factorialRecursive(i);
        }
    }
}
