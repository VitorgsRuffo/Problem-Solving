#include <stdio.h>
#include <string.h>


int main (void){
    char string[1000];
    int Ts, QM, Qm, Qn, t, i;

    while(scanf(" %[^\n]s", string) != EOF){

        Ts = strlen(string);
        
        t = 0;

        QM = 0; Qm = 0; Qn = 0;

        if(Ts >= 6 && Ts <= 32){
            for(i = 0; i<Ts; ++i){
                if(string[i] >= 65 && string[i] <= 90){
                    ++QM;
                }else if(string[i] >= 48 && string[i] <= 57){
                    ++Qn;
                }else if(string[i] >= 97 && string[i] <= 122){
                    ++Qm;
                }else{
                    ++t;
                }
            }

            if(t > 0 || QM == 0 || Qn == 0 || Qm == 0){
                printf("Senha invalida.\n");
            }else{
                printf("Senha valida.\n");
            }

        }else{
            printf("Senha invalida.\n");
        }
    }





    return 0;
}