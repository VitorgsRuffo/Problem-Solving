#include <stdio.h>
#include <math.h>

int main (void){
    double A, B, C, p, Ar;
    double Sun, Vi, Ro;

    while(scanf("%lf %lf %lf", &A, &B, &C) != EOF){

    p = (A + B + C)/2;
    Ar = sqrt(p*(p-A)*(p-B)*(p-C));
    Ro = Ar/p;

    Ro =  3.1415926535897 * (Ro * Ro);

    Vi = (sqrt(p*(p-A)*(p-B)*(p-C))) - Ro;

    Ar = (A * B * C)/(4*Ar);
    Sun = (3.1415926535897 * (Ar * Ar)) - (Vi + Ro);


    printf("%.4f %.4f %.4f", Sun, Vi, Ro);

    }

    getch();

    return 0;
}