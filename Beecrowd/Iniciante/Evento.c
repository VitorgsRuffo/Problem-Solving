#include <stdio.h>

int main (void){
    int X, M;

    while(1){

        scanf("%d %d", &X, &M);

        if(X == 0 && M == 0)
            break;

        M *= X;

        printf("%d\n", M);

        
    }
    




    return 0;
}