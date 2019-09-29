#include <stdio.h>
#include <math.h>

int main (void){
    float A, B, C, result;
    

    scanf("%f %f %f", &A, &B, &C);

    if(fabs(B - C) < A && A < B + C &&
       fabs(A - C) < B && B < A + C &&
       fabs(A - B) < C && C < A + B){
        result = A + B + C;
        printf("Perimetro = %.1f\n", result);
    }else{
        result = ((A + B)*C)/2;
        printf("Area = %.1f\n", result);
    }

    getch();

    return 0;
}