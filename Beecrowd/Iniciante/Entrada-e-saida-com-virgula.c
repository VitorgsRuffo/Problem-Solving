#include <stdio.h>

int main (void){
    char frase[200];
    int i;

    while(scanf(" %[^\n]s", frase) != EOF){
        for(i=0; i<200; ++i){
            if(frase[i] == '\0')
                break;
            
            if(frase[i] != ',')
                printf("%c", frase[i]);
            else
                printf("\n");
        }
        printf("\n");

    }

    

    return 0;
}