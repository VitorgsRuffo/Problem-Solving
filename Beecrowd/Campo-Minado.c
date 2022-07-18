#include <stdio.h>


int main (void){
    int N, i, S;

    scanf("%d", &N);

    int tab[N], out[N];

    for(i = 0; i<N; ++i)
        scanf("%d", &tab[i]);
    
    for(i = 0; i<N; ++i){
        S = 0;
        
        if(i-1 > -1){
            if(tab[i-1] == 1)
                ++S;
        }

        if(i+1 < N){
            if(tab[i+1] == 1)
                ++S;
        }

        if(tab[i] == 1)
            ++S;
        
        out[i] = S;
    }

    for(i = 0; i<N; ++i)
        printf("%d\n", out[i]);


    return 0;
}