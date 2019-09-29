#include <stdio.h>

int main (void){
    double A, B, Aumento;

    scanf("%lf %lf", &A, &B);

    Aumento = ((100*B)/A) - 100;

    printf("%.2f%%\n", Aumento);

    getch();


    return 0;
}