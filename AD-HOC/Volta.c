#include <stdio.h>

int main(void){
    int X, Y, C_Dseg, Voltas = 1;

    scanf("%d %d", &X, &Y);

    C_Dseg = Y - X;

    while(C_Dseg < Y){
        C_Dseg += Y - X;

        ++Voltas;
    }

    printf("%d", Voltas);

    return 0;
}