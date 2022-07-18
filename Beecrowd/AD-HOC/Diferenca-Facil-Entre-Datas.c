#include <stdio.h>

int main (void){
    int mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int D1, M1, D2, M2, S1 = 0, S2 = 0, i;

    scanf("%d %d", &D1, &M1);
    scanf("%d %d", &D2, &M2);

    for(i = 0; i < M1 - 1; ++i){
        S1 += mes[i];
    }

    S1 += D1;

    for(i = 0; i < M2 - 1; ++i){
        S2 += mes[i];
    }

    S2 += D2;

    printf("%d\n", S2-S1);

    getch();




    return 0;
}