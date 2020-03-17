#include <stdio.h>

int main (void){
    int N, M, vet[6] = {2, 5, 10, 20, 50, 100}, i, j, T, test;

    while(1){

        scanf("%d %d", &N, &M);

        if(N == 0 && M == 0)
            break;

        T = M - N;

        
        test = 0;   
        
        for(i = 0; i<5; ++i){
            for(j = i; j<5; ++j){
                if(T == vet[i] + vet[j+1]){
                    printf("possible\n");
                    test = 1;
                }
            }
        }

    

        if(!test)
            printf("impossible\n");


    }

    return 0;
}