#include <stdio.h>

int main (void){
    int C, i, j, N, qam;
    double mt, mam;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        mt = 0;
        qam = 0;
        
        scanf("%d", &N);
        int estudantes[N];

        for(j=0; j<N; ++j){
            scanf("%d", &estudantes[j]);
            mt += estudantes[j];
        }

        mt /= N;

        for(j=0; j<N; ++j){
            if((double)estudantes[j] > mt)
                ++qam;
        }
        
        mam = (double) (qam*100)/N;

        printf("%.3f%%\n", mam);

    }  



    return 0;
}