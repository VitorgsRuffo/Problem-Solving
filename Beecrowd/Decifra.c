#include <stdio.h>
#include <string.h>

int main (void){
    char alf[27];
    char frase[10001];
    int i, j, Tf;

    scanf(" %s", alf);
    scanf(" %s", frase);
    Tf = strlen(frase);

    for(i = 0; i<Tf; ++i){
        for(j = 0; j<26; ++j){
            if(frase[i] == alf[j])
                printf("%c", (char) 97 + j);
        }
    }

    printf("\n");

    getch();




    return 0;
}