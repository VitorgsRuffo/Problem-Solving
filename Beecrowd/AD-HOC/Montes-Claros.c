#include <stdio.h>

int main (void){
    int N, i, t = 0, K;

    scanf("%d", &N);

    long int dist[N], ton[N], aux;

    for(i = 0; i<N; ++i)
        scanf("%li %li", &dist[i], &ton[i]);
    
    K = N;

    while(1){
        if(K <= 1)
            break;

        for(i = 0; i<K-1; ++i){
            if(dist[i] > dist[i+1]){
                aux = dist[i];
                dist[i] = dist[i+1];
                dist[i+1] = aux;

                aux = ton[i];
                ton[i] = ton[i+1];
                ton[i+1] = aux;
            }
        }
        
        --K;
    }

    for(i = 0; i<N-1; ++i)
        if(ton[i] < ton[i+1])
            t = 1;
    
    if(t != 0)
        printf("N\n");
    else
        printf("S\n");

        
    




    return 0;
}