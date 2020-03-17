#include <stdio.h>

int main (void){
    int T[4], i, S = -3;

    for(i = 0; i < 4; ++i){
        scanf("%d", &T[i]);
        S += T[i];
    }

    printf("%d\n", S);

    getch();

    return 0;
}