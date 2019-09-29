#include <stdio.h>

int main(void){
    int I = -1, J = 5, aux, cont = 1, i;

    while(1){
        if(cont > 5)
            break;

        I = I + 2;
        J = J + 2;
        aux = J;
        for(i = 0; i<3; ++i){
            printf("I=%d J=%d\n", I, aux);
            aux -= 1;
        }

        ++cont;
    }

    return 0;
}