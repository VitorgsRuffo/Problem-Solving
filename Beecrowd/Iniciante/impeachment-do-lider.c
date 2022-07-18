#include <stdio.h>

int main (void){
    int i, Op;
    double N, c;
    
    while(scanf("%lf", &N) != EOF){
        c = 0.0;

        for(i = 0; i<N; ++i){
            scanf("%d", &Op);
            if(Op == 1)
                c = c + 1.0;
        }

        N = N * (double)(2.0/3.0);
        
        if(c >= N)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");

    }
    



    return 0;
}