#include <stdio.h>

int main(void){
    double vet[6], M = 0;
    int i, cp = 0;

    for(i = 0; i<6; ++i){
        scanf("%lf", &vet[i]);
        if(vet[i] > 0){
            ++cp;
            M += vet[i];
        }
    }

    M /= cp;

    printf("%d valores positivos\n%.1f\n", cp, M);

    getch();


    return 0;
}