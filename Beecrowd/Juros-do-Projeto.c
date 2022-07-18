#include <stdio.h>


int main (void){
    double X, Y, Z;
    
    int P = 1;

    while(scanf("%lf %lf", &X , &Y) == 2){
        Z = ((Y*100.0)/X) - 100.0;

        

        printf("Projeto %d:\n", P);
        printf("Percentual dos juros da aplicacao: %.2f %%\n\n", Z);

        ++P;
    }




    return 0;
}