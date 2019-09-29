#include <stdio.h>

int main (void){
    int vet[3], vet2[3], i, aux;

    for(i = 0; i<3; ++i){
        scanf("%d", &vet[i]);
        vet2[i] = vet[i];
    }

    for(i = 0; i<3; ++i){
        if(i < 2){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }

    if(vet[0] > vet[1]){
        aux = vet[0];
        vet[0] = vet[1];
        vet[1] = aux;
    }

    for(i = 0; i<3; ++i)
        printf("%d\n", vet[i]);
    

    printf("\n");

    for(i = 0; i<3; ++i)
        printf("%d\n", vet2[i]);
    

    getch();

    return 0;
}
