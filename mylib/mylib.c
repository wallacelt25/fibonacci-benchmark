#include <stdio.h>

// Iterative
int fibonacciiterative(int N){

    int temp_1 = 0;
    int temp_2 = 1;
    int fibo;

    if (N == 0){
        return temp_1;
    } else if (N == 1){
        return temp_2;
    } else{
        for(int i = 2; i <= N; i++){
            fibo = temp_1 + temp_2;
            temp_1 = temp_2;
            temp_2 = fibo;
        }
        return fibo;
    }
    
    
}

// Recursive
int fibonaccirecursive(int n){

    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else{
        return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
    }
    
}
