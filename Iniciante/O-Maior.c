#include <stdio.h>
#include <math.h>

int main (void){
    int A, B, C, M;

    scanf("%d %d %d", &A, &B, &C);

    M = (A + B + abs(A - B))/2;

    M = (M + C + abs(M - C))/2;

    printf("%d eh o maior\n", M);




    return 0;
}