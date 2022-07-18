#include <stdio.h>

int main (void){
    int C, i, j, ind ;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        char msg[100];

        scanf(" %[^\n]s", msg);

        for(j = 0; j<100; ++j)
            if(msg[j] == '\0'){
                ind = j;
                break;
            }
            
        
        for(j = ind - 1; j > -1; --j){
            if(msg[j] >= 97){
                printf("%c", msg[j]);
            }
        }

        printf("\n");
            
        
        
    
    }



    return 0;
}