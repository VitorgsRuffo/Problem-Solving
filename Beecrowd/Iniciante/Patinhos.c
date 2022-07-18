#include <stdio.h>

int main (void){
    unsigned long long int P;

    while(1){
        scanf("%llu", &P);

        if(P == -1)
            break;

        if(P > 0)
            P -= 1;

        printf("%llu\n", P);
        
    }



    return 0;
}