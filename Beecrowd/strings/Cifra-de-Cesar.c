#include <stdio.h>

int main (void){
    int N, i, D, j;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        
        char string[51];

        scanf(" %s", string);

        scanf("%d", &D);

        for(j = 0; j<51; ++j){
            if(string[j] == '\0')
                break;
            if(string[j] - D >= 65)
                printf("%c", string[j] - D);
            else{
                printf("%c", 91 - (65 - (string[j] - D)));
            }
        }

        printf("\n");
    }


    return 0;
}