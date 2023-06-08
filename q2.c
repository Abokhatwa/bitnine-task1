#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

long long* memo;

long long func1(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return func1(n - 3) + func1(n - 2);
}

long long func2(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = func2(n - 3) + func2(n - 2);
    return memo[n];
}

long long func3(int n) {
    long long fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= n; i++) {
        fib[i] = fib[i - 3] + fib[i - 2];
    }
    return fib[n];
}

int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    if(argc==3){
        int f = atoi(argv[2]);
        if(f==1){
            long long result = func1(n);
            printf("F(%d) = %lld using the first function\n", n, result);
        }
        else if(f==2){
                    memo = malloc(sizeof(long long) * (n + 1));
                    for (int i = 0; i <= n; i++) {  // Updated loop condition
                    memo[i] = -1;
                    }
            long long result = func2(n);
            printf("F(%d) = %lld using the second function\n", n, result);
            free(memo);
        }
        else if(f==3){
            long long result = func3(n);
            printf("F(%d) = %lld using the third function\n", n, result);
        }
    }
    return 0;
}
