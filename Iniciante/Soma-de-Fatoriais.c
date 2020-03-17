#include <stdio.h>

int main (void){
    int N, M, i;
    long long int fatn, fatm, soma;

    while(scanf("%d %d", &N, &M) != EOF){
        fatn = 1;
        fatm = 1;
        soma = 0;

        for(i = 1; i<=N; ++i)
            fatn *= i;
        for(i = 1; i<=M; ++i)
            fatm *= i;
        
        soma = fatn + fatm;

        printf("%lli\n", soma);

    }





    return 0;
}