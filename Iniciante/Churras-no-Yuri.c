#include <stdio.h>

int main (void){
    int N, i, aux, K, j;

    while(scanf("%d", &N) != EOF){
        char carne[N][21];
        int data[N];
        int vet[N];

        for(i=0; i<N; ++i){
            scanf("%s %d", &carne[i], &data[i]);
            vet[i] = data[i];
        }        

        K = N;
        while(1){
            --K;
            if(K<=0)
                break;
                
            for(i=0; i<K; ++i){
                if(vet[i] > vet[i+1]){
                    aux = vet[i];
                    vet[i] = vet[i+1];
                    vet[i+1] = aux;
                }
            
            }
        
        }

        

        for(i=0; i<N; ++i){
            for(j=0; j<N; ++j){
                if(vet[i] == data[j]){
                    printf("%s", carne[j]);
                }

            }
            
            if(i < N-1)
                printf(" ");
            else
                printf("\n");
        }
        

    

    }


    return 0;
}