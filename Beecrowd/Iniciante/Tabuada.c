#include <stdio.h>

int main(void){
    int N, R, i;

    scanf("%d", &N);

    for(i = 1; i < 11; ++i){
        R = i * N;
        printf("%d x %d = %d\n", i, N, R);
    }

    return 0;
}