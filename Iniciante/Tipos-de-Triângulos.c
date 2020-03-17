#include <stdio.h>
#include <math.h>

int main (void){
    double vet[3], aux;
    int i;

    for(i = 0; i<3; ++i)
        scanf("%lf", &vet[i]);
    
    for(i = 0; i<2; ++i){
        if(vet[i] < vet[i+1]){
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
        }
    }

    if(vet[0] < vet[1]){
        aux = vet[0];
        vet[0] = vet[1];
        vet[1] = aux;   
    }

    if(vet[0] >= vet[1] + vet[2])
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(pow(vet[0], 2) == pow(vet[1], 2) + pow(vet[2], 2))
            printf("TRIANGULO RETANGULO\n");
        if(pow(vet[0], 2) > pow(vet[1], 2) + pow(vet[2], 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if(pow(vet[0], 2) < pow(vet[1], 2) + pow(vet[2], 2))
            printf("TRIANGULO ACUTANGULO\n");
        
        if(vet[0] == vet[1] && vet[0] == vet[2])
            printf("TRIANGULO EQUILATERO\n");
        else if(vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2])
            printf("TRIANGULO ISOSCELES\n");
    }
    

    getch();


    return 0;
}