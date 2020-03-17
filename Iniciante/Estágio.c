#include <stdio.h>

int main (void){
    int M, N, C, i, Nu, D;
    double IRA;

    while(scanf("%d", &M) != EOF){
        Nu = 0;
        D = 0;
        for(i = 0; i<M; ++i){
            scanf("%d %d", &N, &C);
            Nu += (N*C);
            D += C;
        
        }

        D *= 100;

        IRA = (double) Nu / D;

        printf("%.4f\n", IRA);

    }



    return 0;
}