#include <stdio.h>

int main (void){
    int N, i, j, K;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d", &K);
        int vet[K];
        int aux;

        for(j = 0; j<K; ++j)
            scanf("%d", &vet[j]);
        
        for(j = 0; j<K; ++j){
            switch(vet[j]){
                case 1:
                    printf("Rolien\n");
                    break;
                case 2:
                    printf("Naej\n");
                    break;
                case 3:
                    printf("Elehcim\n");
                    break;
                case 4:
                    printf("Odranoel\n");
                    break;
            }
        }
        
    }






    return 0;
}