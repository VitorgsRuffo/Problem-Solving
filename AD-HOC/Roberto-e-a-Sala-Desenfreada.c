#include <stdio.h>
#include <string.h>

int main (void){
    long int N, i;
    int EPR, EHD, INTRUSOS;
    char mat[10], sigla[20];
    
    while(scanf("%li", &N) != EOF){

        EPR = 0; EHD = 0; INTRUSOS = 0;
    
        for(i = 0; i<N; ++i){
            scanf(" %s %s", mat, sigla);
            if(strcmp(sigla, "EPR") == 0){
                ++EPR;
            }else if(strcmp(sigla, "EHD") == 0){
                ++EHD;
            }else{
                ++INTRUSOS;
            }
        }

        printf("EPR: %d\nEHD: %d\nINTRUSOS: %d\n", EPR, EHD, INTRUSOS);
    }

    return 0;
}