#include <stdio.h>

int main (void){
    int C, N, Pf;

    do{
        scanf("%d %d", &C, &N);
    }while((C < 1) || (C>100000000) || (N<1) || (N>100));

    Pf = C % N;

    printf("%d\n", Pf);

    return 0;
}