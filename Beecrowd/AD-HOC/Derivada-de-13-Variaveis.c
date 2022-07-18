#include <stdio.h>

int main (void){
    double P, T, R;

    scanf("%lf %lf", &P, &T);

    R = (P*T)/2;

    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5f.\n", R);

    getch();

    return 0;
}