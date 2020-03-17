#include <stdio.h>

int main (void){
    float X, Y, M;

    do{
        scanf("%f", &X);
        if(X < 0.0 || X > 10.0)
            printf("nota invalida\n");
    }while(X < 0.0 || X > 10.0);

    do{
        scanf("%f", &Y);
        if(Y < 0.0 || Y > 10.0)
            printf("nota invalida\n");
    }while(Y < 0.0 || Y > 10.0);

    M = (X + Y)/2.0;

    printf("media = %.2f\n", M);

    getch();

    return 0;
}