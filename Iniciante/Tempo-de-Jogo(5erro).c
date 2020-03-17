#include <stdio.h>

int main (void){
    int I, F, c = 0;

    scanf("%d %d", &I, &F);

    
        

        if(I == 0 && F == 0){
            c = 24;
        }else if(I > F){
            while(1){
                ++I;
                ++c;
                if(I >= 24){
                    I = 0;
                    while(1){
                        ++I;
                        ++c;
                        if(I >= F)
                            break;
                    }
                    break;
                }
            }
        }else if(F > I){
            while(1){

                ++I;
                ++c;
                if(I >= F)
                    break;
            }
        }

    

    printf("O JOGO DUROU %d HORA(S)\n", c);

    getch();

    return 0;
}