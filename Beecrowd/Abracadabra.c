#include <stdio.h>
#include <string.h>

int main (void){
    char string[101];
    int spc, i, Ts;

    while(scanf(" %s", string) != EOF){
        Ts = strlen(string);
        
        for(i = 0; i<Ts; ++i){
            if(i == Ts-1)
                printf("%c\n", string[i]);
            else
                printf("%c ", string[i]);
        }
        
        
        spc = 1;

        while(1){
            if(spc == Ts)
                break;

            for(i = 0; i<spc; ++i)
                printf(" ");
        
            for(i = 0; i<Ts-spc; ++i){
                if(i == Ts-spc-1)
                    printf("%c", string[i]);
                else
                    printf("%c ", string[i]);
            }

            printf("\n");
            ++spc;
        }

        printf("\n");
        
    }




    return 0;
}