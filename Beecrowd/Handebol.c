#include <stdio.h>


int main (void){
    int N, M, i, j, t, jog;

    scanf("%d %d", &N, &M);

    int mat[N][M];

    jog = 0;

    for(i = 0; i<N; ++i){
        t = 0;
        for(j = 0; j<M; ++j){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 0)
                ++t;
        }

        if(t >= M)
            ++jog;

    }

    printf("%d\n", jog);

    getch();

    return 0;
}