#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#include "mylib/mylib.h"

int main (void) {
    srand(time(0));
    int b;

    const int N = 40;

    float startTime = (float)clock()/CLOCKS_PER_SEC;
    for (int i = 0; i < N; i++){
        b = fibonacciiterative(i);
    }
    float endTime  = (float)clock()/CLOCKS_PER_SEC;

    printf("Time elapsed: %f s\n",endTime - startTime);

    return 0;
}
