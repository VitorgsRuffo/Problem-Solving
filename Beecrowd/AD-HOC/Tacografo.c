#include <stdio.h>

int main (void){
    int N, T, V, R = 0, i;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d %d", &T, &V);
        R += (T*V);
    }

    printf("%d\n", R);



    return 0;
}