#include <stdio.h>

int main (void){
    int N, M, i, j, indi;

    scanf("%d %d", &N, &M);

    long int mat[N][M+1], mv = 100000001;


    for(i = 0; i<N; ++i){
        mat[i][M] = 0; 
        for(j = 0; j<M; ++j){
            scanf("%li", &mat[i][j]);
            mat[i][M] += mat[i][j];
        } 

        if(mat[i][M] < mv){
            mv = mat[i][M];
            indi = i + 1;
        }
    }

    printf("%d\n", indi);
    getch();
    
    return 0;
}