#include <stdio.h>

int main (void){
    int N, i, S, B, A, S1, B1, A1, SG = 0, BG = 0, AG = 0, SG1 = 0, BG1 = 0, AG1 = 0; 
    double P;

    scanf("%d", &N);
    char nomes[N][10];


    for(i=0; i<N; ++i){

        scanf("%s", &nomes[i]);
        scanf("%d %d %d", &S, &B, &A);
        scanf("%d %d %d", &S1, &B1, &A1);
        SG += S;
        BG += B;
        AG += A;
        SG1 += S1;
        BG1 += B1;
        AG1 += A1;
        
    }

    P = (double) (SG1*100)/SG;
    printf("Pontos de Saque: %.2f %%.\n", P);
    P = (double)(BG1*100)/BG;
    printf("Pontos de Bloqueio: %.2f %%.\n", P);
    P = (double) (AG1*100)/AG;
    printf("Pontos de Ataque: %.2f %%.\n", P);


    getch();


    return 0;
}