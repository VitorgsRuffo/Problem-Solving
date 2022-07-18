#include <stdio.h>

int main (void){
    double A , raio;

    scanf("%lf", &raio);

    A = 3.14159 * (raio * raio);

    printf("A=%.4f", A);

    getch();

    return 0;
}