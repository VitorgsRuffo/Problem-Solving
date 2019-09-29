#include <stdio.h>

int main (void){
    int N;

    scanf("%d", &N);

    int X[N], i , Mv = 10000, pos;

    for(i = 0; i<N; ++i){
        scanf("%d ", &X[i]);
        if(X[i] < Mv){
            Mv = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", Mv, pos);

    getch();


    return 0;
}