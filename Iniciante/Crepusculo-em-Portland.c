#include <stdio.h>

int main (void){
    int N, i, j , t;


    scanf("%d", &N);

    ++N;

    int vet[N][N];

    for(i=0; i<N; ++i)
        for(j=0; j<N; ++j)
            scanf("%d", &vet[i][j]);

    for(i=0; i<N-1; ++i){
        for(j=0; j<N-1; ++j){
            t = 0;
            if(vet[i][j] == 1)
                ++t;
            if(vet[i][j+1] == 1)
                ++t;
            if(vet[i+1][j] == 1)
                ++t;
            if(vet[i+1][j+1] == 1)
                ++t;

            if(t >=2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }

    getch();

    return 0;
}