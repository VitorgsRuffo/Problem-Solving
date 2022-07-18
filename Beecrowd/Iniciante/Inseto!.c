#include <stdio.h>

int main (void){
    int C, i;
    long int N;


    scanf("%d", &C);

    for(i=0; i<C; ++i){
        scanf("%li", &N);
        if(N <= 8000)
            printf("Inseto!\n");
        else
            printf("Mais de 8000!\n");
    }


    return 0;
}