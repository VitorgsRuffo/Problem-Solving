#include <stdio.h>

int main (void){
    char CPF[15];
    int i, t = 0;

    scanf(" %s", CPF);

    for(i = 0; i<14; ++i){
        if(CPF[i] == '.' || CPF[i] == '-')
            printf("\n");
        else
            printf("%c", CPF[i]);
    }

    printf("\n");

    return 0;
}