function* factorial(n) {
    if (n <= 1) {
            return 1;
        }
    function factorialRecursive(n) {
        if (n <= 1) {
            return 1;
        }
        return n * factorialRecursive(n - 1);
    }
    
    for (let i = 1; i <= n; i++) {
        yield factorialRecursive(i);
    }

}
