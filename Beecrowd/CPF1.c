#include <stdio.h>

int main (void){
    char CPF[15];
    int i, f, S;

    while(scanf(" %s", CPF) != EOF){
        f = 1;
        S = 0;

        for(i = 0; i<11; ++i){
            if(CPF[i] != '.'){
                S += (f*(CPF[i] - '0')); 
                ++f;
            }
        }        

        S = S % 11;
       

        if(S == (CPF[12] - '0') || (S == 10 && CPF[12] == '0')){
    
            f = 9;
            S = 0;

            for(i = 0; i<11; ++i){
                if(CPF[i] != '.'){
                    S += (f*(CPF[i] - '0')); 
                    --f;
                }
            }        

            S = S % 11;
            
            if(S == (CPF[13] - '0') || (S == 10 && CPF[13] == '0')){
                printf("CPF valido\n");
            }else{
                printf("CPF invalido\n");
            }
        }else{
            printf("CPF invalido\n");
        }




    }




    return 0;
}