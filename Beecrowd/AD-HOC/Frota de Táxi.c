#include <stdio.h>

int main (void){
    float A, G, Ra, Rg, aux;

    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

    if(A > G){
        aux = A/G;

        if(aux * Rg >= Ra)
            printf("G\n");
        else
            printf("A\n");

    }else if (G > A){
        aux = G/A;

        if(aux * Ra > Rg)
            printf("A\n");
        else
            printf("G\n");

    }else if(A == G){
        if(Rg >= Ra)
            printf("G\n");
        else
            printf("A\n");
    }




    return 0;
}