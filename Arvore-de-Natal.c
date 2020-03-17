#include <stdio.h>
#include <string.h>


int main (void){
    int N, spc, i, Tast;

    while(scanf("%d", &N) != EOF){
        spc = N/2;
        Tast = 1;

        while(1){
            if(Tast > N)
                break;

            for(i = 0; i<spc; ++i)
                printf(" ");
            
            for(i = 0; i<Tast; ++i)
                printf("*");

            printf("\n");
            --spc;
            Tast += 2;
        }

        spc = N/2;

        for(i = 0; i<spc; ++i)
            printf(" ");

        printf("*\n");
        
        for(i = 0; i<spc-1; ++i)
            printf(" ");
        
        printf("***\n\n");
    }





    return 0;
}