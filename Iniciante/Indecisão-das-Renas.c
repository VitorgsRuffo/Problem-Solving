#include <stdio.h>

int main (void){
    int bolas[9], i, T = 0, ind;
    char rena[9][10] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};        

    for(i = 0; i<9; ++i){
        scanf("%d", &bolas[i]);
        T += bolas[i];
    }

    while(1){

        for(i = 0; i<9; ++i){
            --T;
            if(T == 0)
                ind = i;
        }
        
        if(T <= 0)
            break;

    }

    printf("%s\n", rena[ind]);
    
    getch();

    return 0;
}