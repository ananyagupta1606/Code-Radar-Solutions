void fibonacciSeries(int n) {
    int fib[n];  // Create an array to store Fibonacci numbers
    fib[0] = 0;  // First Fibonacci number
    // Print the first Fibonacci number
    printf("%d ", fib[0]);
    if (n > 1) {
        fib[1] = 1;  // Second Fibonacci number
        printf("%d ", fib[1]);
    }
    // Calculate and print the rest of the Fibonacci series
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }

}

