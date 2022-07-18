#include <stdio.h>

int main (void){
    char nome[10];
    double sal, vendas, total;

    fgets(nome, 10, stdin);

    scanf("%lf %lf", &sal, &vendas);

    total = sal + (vendas * 0.15);

    printf("TOTAL = R$ %.2f\n", total);

    getch();

    return 0;
}