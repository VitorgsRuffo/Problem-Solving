#include <stdio.h>

int main (void){
    char nome[50];
    int D, c = 0;
    double M = 0;

    while(scanf(" %[^\n]s", nome) != EOF){
        scanf("%d", &D);
        M += D;
        ++c;
    }

    M /= c;

    printf("%.1f\n", M);

    getch();

    return 0;
}