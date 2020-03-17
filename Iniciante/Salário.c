#include <stdio.h>

int main (void){
    int N, Hr;
    double Shr, S;

    scanf("%d %d %lf", &N, &Hr, &Shr);

    S = (double) Hr * Shr;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", N, S);

    getch();

    return 0;
}