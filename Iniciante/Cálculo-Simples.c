#include <stdio.h>

int main (void){
    int cod1, cod2, q1, q2;
    double v1, v2, vf;

    scanf("%d %d %lf %d %d %lf", &cod1, &q1, &v1, &cod2, &q2, &v2);

    vf = (double)q1 * v1 + (double)q2 * v2;

    printf("VALOR A PAGAR: R$ %.2lf\n", vf);

    getch();
    
    return 0;
}