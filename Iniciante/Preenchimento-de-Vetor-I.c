#include <stdio.h>

int main (void){
    int vet[10], N, i;

    scanf("%d", &N);

    vet[0] = N;

    printf("N[%d] = %d\n", 0, vet[0]); 

    for(i = 1; i<10; ++i){
        N *= 2;
        vet[i] = N;
        printf("N[%d] = %d\n", i, vet[i]); 
    }

    getch();

    return 0;
}