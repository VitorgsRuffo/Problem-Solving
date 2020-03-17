#include <stdio.h>
#include <string.h>

int main (void){    
    int N, i, j;
    char jogadas[3][10] = {"pedra", "papel", "ataque"};
    char j1[10], j2[10];
    int j1n, j2n;

    scanf("%d", &N);

    for(i=0; i<N; ++i){
        scanf("%s", j1);
        scanf("%s", j2);

        for(j=0; j<3; ++j){
            if(strcmp(j1, jogadas[j]) == 0){
               j1n =  j + 1;
            }

            if(strcmp(j2, jogadas[j]) == 0){
               j2n =  j + 1;
            }
        }

        switch(j1n){
            case 1:
                if(j2n == 2)
                    printf("Jogador 1 venceu\n");
                else if(j2n == 3)
                    printf("Jogador 2 venceu\n");
                else if(j2n == 1)
                    printf("Sem ganhador\n");
                break;
            case 2:
                if(j2n == 2)
                    printf("Ambos venceram\n");
                else
                    printf("Jogador 2 venceu\n");
                break;
            case 3:
                if(j2n == 3)
                    printf("Aniquilacao mutua\n");
                else
                    printf("Jogador 1 venceu\n");
                break;   
        }
       

        
        
    }
    return 0;
}