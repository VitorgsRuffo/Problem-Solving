#include <stdio.h>

int main (void){
    int E, D;

    scanf("%d %d", &E, &D);

    if(D < E){
        printf("Eu odeio a professora!\n");
        return 0;
    }
    
    if(E < 21)
        printf("Muito bem! Apresenta antes do Natal!\n");
    else{
        printf("Parece o trabalho do meu filho!\n");
        D += 2;
        if(D <= 24)
            printf("TCC Apresentado!\n");
        else
            printf("Fail! Entao eh nataaaaal!\n");
    }

    getch();

    return 0;
}