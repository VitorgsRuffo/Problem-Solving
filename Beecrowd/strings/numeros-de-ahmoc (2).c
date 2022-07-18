#include <stdio.h>
#include <string.h>

int main (void){
    char a[8], msg[300001];
    int i = 1;

    while(1){
        
        scanf(" %s", a);

        if(strcmp(a, "0") == 0)
            break;
        
        if(i > 1)
            printf("\n");
        
        scanf(" %s", msg);

        if(strstr(msg, a) == NULL){
            printf("Instancia %d\nfalsa\n", i);
        }else{
            printf("Instancia %d\nverdadeira\n", i);
        }
    

        ++i;
    }




    return 0;
}