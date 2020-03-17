#include <stdio.h>

int main(void){
    int N, i;
    float A, B, C, M;
    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%f %f %f", &A, &B, &C);
        M = ((A*2) + (B*3) + (C*5))/10;
        printf("%.1f\n", M);
    }

    getch();

    return 0;
}