#include <stdio.h>

int main (void){
    double A, B, C;
    double T, Ci, Tra, Q , R; 

    scanf("%lf %lf %lf", &A, &B, &C);

    T = (A * C)/2;

    Ci = 3.14159 * C * C;

    Tra = ((A + B) * C)/2;

    Q = B * B;

    R = A * B;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", T, Ci, Tra, Q, R);


    getch();
    
    return 0;
}