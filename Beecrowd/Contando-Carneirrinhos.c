#include <stdio.h>

int main (void){
    int T, N, i, j, k, t, Qc;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        scanf("%d", &N);

        long carneiro[N], test[N];

        for(j = 0; j<N; ++j)
            test[j] = -1;
        
        Qc = 0;

        for(j = 0; j<N; ++j){
            scanf("%li", &carneiro[j]);
        
            t = 0;
            for(k = 0; k<N; ++k)
                if(carneiro[j] == test[k])
                    ++t;

            if(t == 0){
                test[j] = carneiro[j];
                ++Qc;
            }
        }

        printf("%d\n", Qc);

    } 


    return 0;
}