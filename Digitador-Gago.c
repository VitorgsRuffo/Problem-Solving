#include <stdio.h>
#include <string.h>

int main (void){
    char string[16000];
    int Ts, i;

    scanf(" %[^\n]s", string);

    Ts = strlen(string);

    for(i = 0; i < Ts; ++i){
        if(string[i-1] == ' '){
            if(string[i] == string[i+2] && string[i+1] == string[i+3]){
                string[i] = '0'; string[i+1] = '0';
            }
        }
    }

    for(i = 0; i < Ts; ++i)
        if(string[i] != '0')
            printf("%c", string[i]);

    printf("\n");

    getch();

    return 0;
}