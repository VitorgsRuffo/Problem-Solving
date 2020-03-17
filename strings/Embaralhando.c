#include <stdio.h>
#include <string.h>


int main (void){
    char S[16];
    int Ts, i;
    long long Qa;

    while(1){

        scanf(" %s", S);

        if(strcmp(S, "0") == 0)
            break;
        
        Ts = strlen(S);
        Qa = 1;

        for(i = 1; i<=Ts; ++i){
            Qa *= i;
        }

        printf("%lli\n", Qa);



    }




    return 0;
}