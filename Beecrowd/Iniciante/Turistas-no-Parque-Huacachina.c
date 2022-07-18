#include <stdio.h>
#include <string.h>

int main (void){
    char movimentoJ[7];
    int j_saiu = 0, j_volto = 0, p_saiu = 0, p_volto = 0, T;

    while(1){
        scanf(" %s", movimentoJ);

        if(strcmp(movimentoJ, "ABEND") == 0)
            break;
        
        scanf("%d", &T);
        


        if(strcmp(movimentoJ, "SALIDA") == 0){
            ++j_saiu;
            p_saiu += T;
        }else if(strcmp(movimentoJ, "VUELTA") == 0){
            ++j_volto;
            p_volto += T;
        }

    } 

    printf("%d\n%d\n", p_saiu-p_volto, j_saiu-j_volto);

    getch();


    return 0;
}