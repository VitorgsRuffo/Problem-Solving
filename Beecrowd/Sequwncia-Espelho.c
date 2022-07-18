#include <stdio.h>

int main (void){
    int C, B, E, x, y, N, i, j, ind;

    scanf("%d", &C);

    for(x = 0; x<C; ++x){
        scanf("%d %d", &B, &E);

        N = E - B + 1;

        char sequencia1[N][6];
        i = 0;

        for(y = B; y <= E; ++y){
            sprintf(sequencia1[i], "%d", y);
            ++i;
        }

        for(i = 0; i<N; ++i)
            printf("%s", sequencia1[i]);
        
        for(i = N-1; i > -1; --i){

            for(j = 0; j<6; ++j){
                if(sequencia1[i][j] == '\0'){
                    ind = j-1;
                    break;
                }
            }

            for(j = ind; j > -1; --j)
                printf("%c", sequencia1[i][j]);
            
        }

        printf("\n");
    }




    return 0;
}