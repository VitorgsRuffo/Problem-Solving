#include <stdio.h>

int main(void){
    int A, N, i, S = 0;

    scanf("%d", &A);
    do{
        scanf("%d", &N);
    }while(N <= 0);

    for(i = 0; i<N; ++i){
        S += A;
        A += 1;
    }

    printf("%d\n", S);

    return 0;
}