#include <stdio.h>
#include <string.h>

int main (void){
    char state[30];

    scanf(" %[^\n]s", state);

    if(strcmp(state, "para") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "roraima") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "acre") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "amapa") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "amazonas") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "rondonia") == 0){
        printf("Regiao Norte\n");
    }else if(strcmp(state, "tocantins") == 0){
        printf("Regiao Norte\n");
    }else{
        printf("Outra regiao\n");
    }


    return 0;
}