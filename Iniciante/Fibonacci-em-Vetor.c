#include <stdio.h>

int main (void){
    int T, i, j, N;

    scanf("%d", &T);
    
    for(i = 0; i<T; ++i){
        scanf("%d", &N);

        unsigned long long int fib[N+1];

        fib[0] = 0;
        fib[1] = 1;

        if(N > 1)
            for(j = 2; j<N+1; ++j)
                fib[j] = fib[j-1] + fib[j-2];

        printf("Fib(%d) = %llu\n", N, fib[N]);

    }






    return 0;
}