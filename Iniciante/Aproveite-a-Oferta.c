#include <stdio.h>

int main (void){
    int T, N, K, i, qtg;

    scanf("%d", &T);

    for(i=0; i<T; ++i){
        scanf("%d %d", &N, &K);
        qtg = 0;
        while(1){
            if(N < K)   
                break;
            
            N -= K;
            ++qtg;

            
        }

        qtg += N;

        printf("%d\n", qtg);
    }

    getch();



    return 0;
}