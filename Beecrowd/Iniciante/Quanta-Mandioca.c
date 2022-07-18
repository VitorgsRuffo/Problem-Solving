#include <stdio.h>

int main (void){
    int vet[5], i, total;

    for(i=0; i<5; ++i)
        scanf("%d", &vet[i]);

    total = vet[0] *300 +  vet[1] *1500 +  vet[2] *600 +  vet[3] *1000 + vet[4] *150 + 225;

    printf("%d\n", total);

    getch();

    return 0;
}