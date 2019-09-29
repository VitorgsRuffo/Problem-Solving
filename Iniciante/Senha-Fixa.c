#include <stdio.h>

int main(void){
    int S = 2002, R;

    while(1){
        scanf("%d", &R);
        if(R == S){
            printf("Acesso Permitido\n");
            break;
        }else
            printf("Senha Invalida\n");

    }

    return 0;
}