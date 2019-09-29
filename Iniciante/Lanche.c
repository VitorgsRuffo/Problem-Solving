#include <stdio.h>

int main(void){
    int C, Q, i;
    float vet[5] = {4.0, 4.5, 5.0, 2.0, 1.5}, T;

    scanf("%d %d", &C, &Q);

    for(i = 0; i<5; ++i){
        if(C == i + 1){
            T = vet[i] * Q;
        }
    }

    printf("Total: R$ %.2f\n", T);

    getch();

    return 0;
}