#include <stdio.h>
#include <string.h>

int main (void){
    char msg[102];
    int Q1 = 0, Tm, i;

    scanf(" %s", msg);
    
    Tm = strlen(msg);

    for(i = 0; i<Tm; ++i)
        if(msg[i] == '1')
            ++Q1;
    
    if(Q1 % 2 == 0){
        msg[Tm] = '0';
        msg[Tm+1] = '\0'; 
    }else if(Q1 % 2 == 1){
        msg[Tm] = '1';
        msg[Tm+1] = '\0';
    }

    printf("%s\n", msg);
    getch();

    return 0;
}