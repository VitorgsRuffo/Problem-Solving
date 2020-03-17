#include <stdio.h>

int main (void){
    int N, S, i, mS;

    scanf("%d %d", &N, &S);

    int mov[N];
    mS = S + 1;

    for(i = 0; i<N; ++i){
        scanf("%d", &mov[i]);

        S += mov[i];
        if(S < mS)
            mS = S;
    }


    printf("%d\n", mS);


    return 0;
}