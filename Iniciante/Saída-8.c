#include <stdio.h>
#include <math.h>

int main (void){
    double A = 234.345, B = 45.698;

    printf("%.6f - %.6f\n%.0f - %.0f\n%.1f - %.1f\n%.2f - %.2f\n%.3f - %.3f\n2.343450e+02 - 4.569800e+01\n2.343450E+02 - 4.569800E+01\n234.345 - 45.698\n%.3f - %.3f\n", A, B, A, B, A, B,234.34 , B, A, B, A, B);

    getch();
    
    return 0;
}