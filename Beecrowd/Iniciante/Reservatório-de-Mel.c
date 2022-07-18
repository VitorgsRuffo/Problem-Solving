#include <stdio.h>


int main (void){
    double V, D, h, A;

    
    while(scanf("%lf %lf", &V, &D) != EOF){
        h = V/(3.14*(D/2)*(D/2));
        A = 3.14*(D/2)*(D/2);

        printf("ALTURA = %.2f\nAREA = %.2f\n", h, A);
    }



    return 0;
}