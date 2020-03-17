#include <stdio.h>


int main (void){
    int aposta[6], sorteio[6], i, j, premio = 0;

    for(i = 0; i<6; ++i)
        scanf("%d", &aposta[i]);
    
    for(i = 0; i<6; ++i)
        scanf("%d", &sorteio[i]);

    for(i = 0; i<6; ++i){
        for(j = 0; j<6; ++j){
            if(aposta[i] == sorteio[j])
                ++premio;
        }
    }

    switch(premio){
        case 3:
            printf("terno\n");
            break;
        case 4:
            printf("quadra\n");
            break;
        case 5:
            printf("quina\n");
            break;
        case 6:
            printf("sena\n");
            break;
        default:
            printf("azar\n");
            break;
    }
    
    getch();

    return 0;
}