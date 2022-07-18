#include <stdio.h>
#include <math.h>

int main (void){
    int A, B, C, D, vet[6], i, aux, K;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    vet[0] = abs((A + B) - (C + D));
    vet[1] = abs((A + C) - (B + D));
    vet[2] = abs((A + D) - (C + B));
    vet[3] = abs((B + C) - (A + D));
    vet[4] = abs((B + D) - (A + C));
    vet[5] = abs((C + D) - (A + B));

    K = 6;
    while(1){
        if(K<=1)
            break;
        
        for(i = 0; i<K-1; ++i){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }


        --K;
    }

    printf("%d\n", vet[0]);

    getch();


    return 0;
}