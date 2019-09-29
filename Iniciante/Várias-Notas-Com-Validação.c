#include <stdio.h>

int main (void){
    double M, A, B;
    int X = 1;

    while(X != 2){
        do{
            scanf("%lf", &A);
            if(A < 0 || A > 10)
                printf("nota invalida\n");
        }while(A < 0 || A >10);

        do{
            scanf("%lf", &B);
            if(B < 0 || B > 10)
                printf("nota invalida\n");
        }while(B < 0 || B > 10);

        M = (A + B)/2;

        printf("media = %.2f\n", M);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &X);
        }while(X < 1 || X > 2);
    
    }

    getch();
    
    return 0;
}