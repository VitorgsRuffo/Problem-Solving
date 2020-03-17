#include <stdio.h>

int main (void){
    unsigned int N, i, M, t = 0;

    scanf("%u %u", &N, &M);

    unsigned int water[N];

    for(i = 0; i<N; ++i)
        scanf("%u", &water[i]);

    for(i = 1; i<N; ++i){
        if(water[i] - water[i-1] > M)
            ++t;
    }



    if(t > 0 || water[N-1] + M < 42195)
        printf("N\n");
    else
        printf("S\n");





    return 0;
}