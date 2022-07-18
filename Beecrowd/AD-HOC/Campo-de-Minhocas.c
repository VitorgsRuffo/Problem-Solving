#include <stdio.h>

int main (void){
    int N, M, i, j, Mp = 0, S;

    scanf("%d %d", &N, &M);

    int campo[N][M];

    for(i = 0; i<N; ++i)
        for(j = 0; j<M; ++j)
            scanf("%d", &campo[i][j]);

    for(i = 0; i<N; ++i){
        S = 0;
        for(j = 0; j<M; ++j){
            S += campo[i][j];
        }
        if(S > Mp)
            Mp = S;
    }

    for(i = 0; i<M; ++i){
        S = 0;
        for(j = 0; j<N; ++j){
            S += campo[j][i];
        }
        if(S > Mp)
            Mp = S;
    }

    printf("%d\n", Mp);

    getch();

        
    




    return 0;
}