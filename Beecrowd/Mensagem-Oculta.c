#include <stdio.h>
#include <string.h>

int main (void){
    int N, x, i, Ts;

    scanf("%d", &N);

    char string[51];

    
    for(x = 0; x<N; ++x){
        scanf(" %[^\n]s" , string);

        Ts = strlen(string);

        if(string[0] != ' ')
            printf("%c", string[0]);
        

        for(i = 1; i<Ts; ++i){
            if(Ts == 1)
                break;
                
            if(string[i-1] == ' ' && string[i] != ' '){
                printf("%c", string[i]);
            }
        }

        printf("\n");

    }



    return 0;
}