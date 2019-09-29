#include <stdio.h>
#include <math.h>

int main (void){
    int N, M, i, j, indi1, indi2, indj1, indj2, R;

    while(scanf("%d %d", &N, &M) != EOF){
        int mat[N][M];

        for(i=0; i<N; ++i)
            for(j=0; j<M; ++j){
                scanf("%d", &mat[i][j]);
                if(mat[i][j] == 1){
                    indi1 = i;
                    indj1 = j;
                }else if(mat[i][j] == 2){
                    indi2 = i;
                    indj2 = j;
                }
            }
        
        R = abs(indi1 - indi2) + abs(indj1 - indj2);

        printf("%d\n", R);


    }


    return 0;
}