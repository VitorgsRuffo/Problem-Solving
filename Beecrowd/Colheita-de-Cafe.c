#include <stdio.h>

int main (void){
    int M, N, i, j, Tl, Ts;

    while(scanf("%d %d", &M, &N) != EOF){
        int mat[M][N];

        Tl = 0;

        for(i = 0; i<M; ++i){
            for(j = 0; j<N; ++j){
                scanf("%d", &mat[i][j]);
                Tl += mat[i][j];
            }
        }

        if(Tl < 60){
            printf("0 saca(s) e %d litro(s)\n", Tl);
        }else{
            Ts = Tl / 60;
            Tl -= (Ts*60);
            printf("%d saca(s) e %d litro(s)\n", Ts, Tl);
        }

        

    }





    return 0;
}