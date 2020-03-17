#include <stdio.h>

int main (void){
    int N, i, Tt, aux;


    while(scanf("%d", &N) != EOF){
        int vetN[N], vetT[N];

        Tt = 0;

        for(i=0; i<N; ++i)
            scanf("%d", &vetN[i]);
        
        for(i=0; i<N; ++i)
            scanf("%d", &vetT[i]);
        
        
        while(1){
            if(N <= 1)
                break;
            
            for(i=0; i<N-1; ++i){
                if(vetN[i] > vetN[i+1]){
                    aux = vetN[i];
                    vetN[i] = vetN[i+1];
                    vetN[i+1] = aux;

                    aux = vetT[i];
                    vetT[i] = vetT[i+1];
                    vetT[i+1] = aux;

                    Tt += vetT[i] + vetT[i+1];
                }

            }
            --N;
        }

        printf("%d\n", Tt);

    }



    return 0;
}