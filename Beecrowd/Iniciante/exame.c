#include <stdio.h>

int main (void){
    int N, Q, i;

    while(scanf("%d %d", &N, &Q) != EOF){
        unsigned int notas[N], aux;
        int pos[Q], ind;

        for(i=0; i<N; ++i)
            scanf("%u", &notas[i]);
        
        for(i=0; i<Q; ++i)
            scanf("%d", &pos[i]);

        ind = N;

        while(1){
            if(ind <= 1)
                break;
            
            for(i=0; i<ind - 1; ++i){
                if(notas[i] < notas[i+1]){
                    aux = notas[i];
                    notas[i] = notas[i+1];
                    notas[i+1] = aux;
                }
            }
            --ind;
        }

        for(i=0; i<Q; ++i)
            printf("%u\n", notas[pos[i] - 1]);
        



    }



    return 0;
}