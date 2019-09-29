#include <stdio.h>

int main (void){
    double vet[100];
    int i;

    for(i = 0; i<100; ++i){
        scanf("%lf", &vet[i]);
        if(vet[i] <= 10)
            printf("A[%d] = %.1f\n", i, vet[i]);
    }

    getch();

    return 0;
}