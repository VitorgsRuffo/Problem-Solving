#include <stdio.h>

int main (void){
    long L, C, X, Y;    

    scanf("%li %li %li %li", &L, &C, &X, &Y);

    if(C % 2 == 0){
        if(Y % 2 == 0){
            printf("Direita\n");
        }else if(Y % 2 == 1){
            printf("Esquerda\n");
        }
        
    }else if(C % 2 == 1){
        if(X % 2 == 0){

            if(Y % 2 == 0){
                printf("Direita\n");
            }else if(Y % 2 == 1){
                printf("Esquerda\n");
            }

        }else if(X % 2 == 1){

            if(Y % 2 == 0){
                printf("Esquerda\n");
            }else if(Y % 2 == 1){
                printf("Direita\n");
            }

        }

    }
    getch();

    return 0;
}