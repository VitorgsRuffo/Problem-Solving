#include <stdio.h>

int main (void){
    int C, N, i, j, k, Qe, Qd;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        Qe = 0;
        scanf("%d", &N);

        for(j = 1; j<=N; ++j){
            Qd = 0;

            for(k = 1; k<=j; ++k){
                if(j % k == 0)
                    ++Qd;
            }

            if(Qd % 2 == 0)
                ++Qe;

        }   


        printf("%d\n", Qe);
    }


    return 0;
}