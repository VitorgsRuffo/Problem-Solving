#include <stdio.h>

int main (void){
    int N, i, C, teste;
    
    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;

        int vetT[N];
        int vetU[N];

        for(i = 0; i<N; ++i)
            vetT[i] = i + 1;

        C = 0;

        teste = 0;
        while(1){

            if(teste >= N)
                break;

            teste = 0;

            for(i = 0; i<N; ++i){
                scanf("%d", &vetU[i]);

                if(vetU[i] == vetT[i])
                    ++teste;
            }

        
            ++C;
        }
        
        printf("%d\n", C);

    }




    return 0;
}