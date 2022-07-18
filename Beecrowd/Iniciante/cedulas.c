#include <stdio.h>

int main (void){
    int V, i,  vet[7] = {100, 50, 20, 10, 5, 2, 1}, vetcont[7] = {0}, cont = 0;

    scanf("%d", &V);
    printf("%d\n", V);

    for(i = 0; i<7; ++i){
        while(1){
            if(cont + vet[i] > V)
                break;
            
            cont += vet[i];

            ++vetcont[i];
        }

    }

    for(i = 0; i<7; ++i){
        printf("%d nota(s) de R$ %d,00\n", vetcont[i], vet[i]);

    }

    getch();

    return 0;
}