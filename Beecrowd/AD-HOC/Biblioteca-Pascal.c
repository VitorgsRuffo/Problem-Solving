#include <stdio.h>

int main (void){
    int N, D, i, j, t;

    while(1){
        scanf("%d %d", &N, &D);
        if(N == 0 && D == 0)
            break;
    
        int alunoJantar[D][N];

        for(i = 0; i<D; ++i)
            for(j = 0; j<N; ++j)
                scanf("%d", &alunoJantar[i][j]);
        
        
        for(j = 0; j<N; ++j){

            t = 0;

            for(i = 0; i<D; ++i){
                t += alunoJantar[i][j];
            }

            if(t >= D)
                break;
            
        }

        if(t >= D)
            printf("yes\n");
        else if (t < D)
            printf("no\n");

    }







    return 0;
}