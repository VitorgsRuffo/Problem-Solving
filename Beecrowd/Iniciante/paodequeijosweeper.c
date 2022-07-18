#include <stdio.h>

int main (void){
    int N, M, i, j;

    while(scanf("%d %d", &N, &M) != EOF){

        int matI[N][M], matO[N][M];

        for(i = 0; i<N; ++i)
            for(j = 0; j<M; ++j){
                scanf("%d", &matI[i][j]);
                if(matI[i][j] == 1)
                    matO[i][j] = 9;
                else
                     matO[i][j] = 0;
            }
        
        for(i = 0; i<N; ++i)
            for(j = 0; j<M; ++j)
                if(matI[i][j] == 0){
                    if(j+1<M)
                        if(matI[i][j+1] == 1)
                            ++matO[i][j];
                    if(j-1 > -1)
                        if(matI[i][j-1] == 1)
                            ++matO[i][j];
                    if(i+1 < N)
                        if(matI[i+1][j] == 1)
                            ++matO[i][j];
                    if(i-1 > -1)
                        if(matI[i-1][j] == 1)
                            ++matO[i][j];
                }
        
        for(i = 0; i<N; ++i){
            for(j = 0; j<M; ++j)
                printf("%d", matO[i][j]);

            printf("\n");   
        }


    }
        
    




    return 0;
}