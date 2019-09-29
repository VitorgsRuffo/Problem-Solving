#include <stdio.h>

int main(void){
    int A, B;

    scanf("%d %d", &A, &B);

    if(A >= B){
        if(A % B == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }else{
        if(B % A == 0)
            printf("Sao Multiplos\n");
        else
            printf("Nao sao Multiplos\n");
    }

    return 0;
}