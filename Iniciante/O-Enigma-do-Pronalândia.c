#include <stdio.h>
#include <math.h>


int main (void){
    unsigned long long int valor;
    int potencia = 10, exp = -1, i = 0;
    

    scanf("%llu", &valor);

    while(1){
        ++exp;
        if(pow(potencia, exp) > valor){
            --exp;
            break;
        }
    }
    int N = exp + 1;
    int vet[N];

    while(1){
        if(i >= N)
            break;

        vet[i] =  valor /  pow(potencia, exp);
        valor  =  fmod(valor,  pow(potencia, exp));
        --exp;
        ++i;

    }

    for(i = N - 1; i > -1; --i)
        printf("%d", vet[i]);
    
    printf("\n");





    getch();
    return 0;
}