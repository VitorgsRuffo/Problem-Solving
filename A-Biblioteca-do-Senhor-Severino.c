#include <stdio.h>
#include <string.h>

int main (void){
    int N, i, k, aux;


    while(scanf("%d", &N) != EOF){

        int vet[N];

        for(i = 0; i<N; ++i)
            scanf("%d", &vet[i]);
        
        k = N;
        while(1){
            if(k<=1)    
                break;

            for(i = 0; i<k-1; ++i){
                if(vet[i] > vet[i+1]){
                    aux = vet[i];
                    vet[i] = vet[i+1];
                    vet[i+1] = aux;
                }
            }

            --k;
        }

        for(i = 0; i<N; ++i){
            if(vet[i] < 10){
                printf("000%d\n", vet[i]);
            }else if(vet[i] >= 10 && vet[i] < 100){
                printf("00%d\n", vet[i]);
            }else if(vet[i] >= 100 && vet[i] < 1000){
                printf("0%d\n", vet[i]);
            }else if(vet[i] >= 1000){
                printf("%d\n", vet[i]);
            }
        }

    }
    
    return 0;
}