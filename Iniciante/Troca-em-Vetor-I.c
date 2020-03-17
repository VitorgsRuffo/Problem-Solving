#include <stdio.h>

int main (void){
    int vet[20], aux, i, j = 20;

    for(i = 0; i < 20; ++i)
        scanf("%d", &vet[i]);

    for(i = 0; i < 10; ++i){
        --j;
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    for(i = 0; i < 20; ++i)
        printf("N[%d] = %d\n", i, vet[i]);

    getch();
    return 0;
}