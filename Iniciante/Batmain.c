#include <stdio.h>
#include <string.h>

int main (void){
    int T, i;
    char vilao[26];

    scanf("%d", &T);

    for(i = 0; i < T; ++i){
        scanf(" %s", vilao);
        if(strcmp(vilao, "Batmain") == 0)
            printf("N\n");
        else
            printf("Y\n");  
        
     }
        



    return 0;
}