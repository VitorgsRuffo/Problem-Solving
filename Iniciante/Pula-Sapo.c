#include <stdio.h>
#include <math.h>

int main (void){
    int P, N, i, t = 0;

    scanf("%d %d", &P, &N);

    int can[N];

    for(i = 0; i<N; ++i)
        scanf("%d", &can[i]);
    

    for(i = 0; i < N - 1; ++i)
        if(abs(can[i] - can[i+1]) <= P)
            ++t;
        
    if(N - 1 == t)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");

    getch();

    return 0;
}