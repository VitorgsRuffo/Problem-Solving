#include <stdio.h>
#include <math.h>

int main (void){
    int N, i, j, QT, S, Dp, indP;

    scanf("%d", &N);

    for(i=0; i<N; ++i){
        Dp = 100;

        scanf("%d %d", &QT, &S);

        int palpites[QT];

        for(j=0; j<QT; ++j){
            scanf("%d", &palpites[j]);
            if(abs(palpites[j] - S) < Dp){
                Dp = abs(palpites[j] - S);
                indP = j+1;
            }
        }   

        printf("%d\n", indP);
        
    }  




    return 0;
}