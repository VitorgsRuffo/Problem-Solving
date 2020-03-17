#include <stdio.h>
#include <string.h>


int main (void){
    char DNA[101], COD[101];

    while(scanf(" %s %s", DNA, COD) != EOF){


        if(strstr(DNA, COD) == NULL){
            printf("Nao resistente\n");
        }else{
            printf("Resistente\n");
        }
    }




    return 0;
}