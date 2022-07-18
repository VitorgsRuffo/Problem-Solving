#include <stdio.h>

int main (void){
    int N, M, i, K, aux, c, Tp;

    while(scanf("%d %d", &N, &M) != EOF){

    int model[N];


    for(i = 0; i<N; ++i)
        scanf("%d", &model[i]);
    

    K = N;

    while(1){
        if(K<=1)
            break;

        for(i = 0; i<K-1; ++i){
            if(model[i] > model[i+1]){
                aux = model[i];
                model[i] = model[i+1];
                model[i+1] = aux;
            }
        }
        
        --K;
    }

    c = 1;
    Tp = 0;
    
    for(i = N-1; i>-1; --i){
        if(c > M) 
            break;

        Tp += model[i];
        ++c;
    }

    printf("%d\n", Tp);
    
    }

    return 0;
}