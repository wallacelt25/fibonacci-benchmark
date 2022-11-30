#include <stdio.h>

#include "mylib/mylib.h"

int main(void){

    int n = 10;

    printf("The fibonacci number for %d is %d\n", n, fibonacciiterative(N));
    printf("The fibonacci number for %d is %d\n", n, fibonaccirecursive(N));


    for (int i = 0; i <= N; i++){
        if (fibonacciiterative(i) != fibonaccirecursive(i)) {
            printf("ERROR at %i\n",i);
        } else {
            printf("The fibonacci number F(%d) = %d = %d\n", i, fibonacciiterative(i), fibonaccirecursive(i));
        }
    }
    
    return 0; 
    
}
