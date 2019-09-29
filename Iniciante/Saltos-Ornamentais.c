#include <stdio.h>

int main (void){
    int N, i, j, indM,  indm;
    char nome[15];
    double notas[7], GD, R, Mv, mv;

    scanf("%d", &N);

    for(i=0; i<N; ++i){
    
        scanf(" %[^\n]s", nome);
        scanf("%lf", &GD);

        R = 0;
        Mv = -1;
        mv = 11;

        for(j=0; j<7; ++j){
            scanf("%lf", &notas[j]);
            if(notas[j] < mv){
                mv = notas[j];
                indm = j;
            }

            if(notas[j] > Mv){
                Mv = notas[j];
                indM = j;
            }
        }

        for(j=0; j<7; ++j)
            if(j != indm && j != indM)
                R += notas[j];
            
        R *= GD;
          
    
        printf("%s %.2f\n", nome, R);

    }

    getch();


    return 0;
}