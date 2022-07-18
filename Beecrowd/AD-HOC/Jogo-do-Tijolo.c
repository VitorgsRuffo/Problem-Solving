#include <stdio.h>

int main (void){
    int T, i, N, j, ind;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        scanf("%d", &N);

        int time[N];

        for(j = 0; j<N; ++j)
            scanf("%d", &time[j]);
        
        ind = (N+1)/2 - 1;

        printf("Case %d: %d\n", i+1, time[ind]);
        
    }

    


    return 0;
}