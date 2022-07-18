#include <stdio.h>

int main (void){
    double vet[100], X;
    int i;

    scanf("%lf", &X);

    vet[0] = X;
    printf("N[0] = %.4f\n", X);

    for(i = 1; i<100; ++i){
        X /= 2;
        vet[i] = X;
        printf("N[%d] = %.4f\n", i, vet[i]);
    }

    getch();

    return 0;
}