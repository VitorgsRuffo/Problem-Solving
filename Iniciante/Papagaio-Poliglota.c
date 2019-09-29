#include <stdio.h>
#include <string.h>

int main (void){
    char acao[10];
    
    
    while(scanf(" %[^\n]s", acao) != EOF){

        if(acao[0] == 'e')
            printf("ingles\n");
        else if(acao[0] == 'd')
            printf("frances\n");
        else if(acao[0] == 'n')
            printf("portugues\n");
        else if(acao[0] == 'a')
            printf("caiu\n");
    
        

    }

    getch();

    return 0;
}