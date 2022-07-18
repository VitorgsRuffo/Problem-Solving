#include <stdio.h>

int main (void){
    int N, M, i, j, C, t, t2, t3, t4;


    while(1){
        scanf("%d %d", &N, &M);
        if(N == 0 && M == 0)
            break;

        int mat[N][M];

        C = 0;

        for(i = 0; i<N; ++i)
            for(j = 0; j<M; ++j)
                scanf("%d", &mat[i][j]);
            
        t2 = 0;

        for(i = 0; i<N; ++i){
            t = 0;
            for(j = 0; j<M; ++j){
                if(mat[i][j] == 1)
                    ++t;   
            }

            if(t < M)
                ++t2;    
        }

        if(t2 >= N)
            ++C;

        

        t = 0;
        t4 = 0;
        for(j = 0; j<M; ++j){
            t2 = 0;
            t3 = 0;
            for(i = 0; i<N; ++i){
                if(mat[i][j] == 1){
                    ++t2;
                    ++t3;
                }
            }

            if(t2 > 0)
                ++t;
            if(t3 >= N)
                ++t4;
        }
        if(t >= M)
            ++C;
        if(t4 <= 0)
            ++C;

        

        t2 = 0;
        for(i = 0; i<N; ++i){
            t = 0;
            for(j = 0; j<M; ++j){
                if(mat[i][j] == 1)
                    ++t;
            }

            if(t > 0)
                ++t2;
        }

        if(t2 >= N)
            ++C;
        
        printf("%d\n", C);
        
    }


    return 0;
}