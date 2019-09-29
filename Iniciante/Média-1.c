#include <stdio.h>

int main(void){
    double A, B, M;

    scanf("%lf %lf", &A, &B);

    M = (A*3.5 + B*7.5)/11;

    printf("MEDIA = %.5f\n", M);

    getch();
    
    return 0;
}