int fibonacciSeries(int n){
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++){
        fib[n] = fib[n-1] = fib[n-2];
        for(int i = 0; i<=n ; i++){
            printf("%d", fib[i]);
        }
    }
}