#include <stdio.h>

int main (void){
    int vet[5], i, cpa = 0, ci = 0, cp = 0, cn = 0;

    for(i = 0; i<5; ++i){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0)
            ++cpa;
        if(vet[i] % 2 == 1 || vet[i] % 2 == -1)
            ++ci;
        if(vet[i] < 0)
            ++cn;
        if(vet[i] > 0)
            ++cp;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", cpa, ci, cp, cn);

    getch();

    return 0;
}