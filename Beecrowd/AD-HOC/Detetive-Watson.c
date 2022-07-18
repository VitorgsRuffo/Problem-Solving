#include <stdio.h>


int main (void){
    int N, i, ind, K, aux;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;

        int vet[N], vet2[N];

        for(i = 0; i<N; ++i){
            scanf("%d", &vet[i]);
            vet2[i] = vet[i];
        }

        K = N;

        while(1){
            if(K<=1)
                break;
            
            for(i = 0; i<K-1; ++i){
                if(vet2[i] > vet2[i+1]){
                    aux = vet2[i];
                    vet2[i] = vet2[i+1];
                    vet2[i+1] = aux;
                }
            }

            --K;
        }

        for(i = 0; i<N; ++i){
            if(vet2[N-2] == vet[i])
                ind = i + 1;    
        }

        printf("%d\n", ind);
    }


    return 0;
}