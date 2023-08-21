function* factorial(n) {
    const memo = new Map(); // Memoization cache
    
    function factorialRecursive(n) {
        if (memo.has(n)) {
            return memo.get(n);
        }

        let result;
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
