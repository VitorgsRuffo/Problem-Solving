#include <stdio.h>

int main (void){
    char alf[27];
    int Npis, i;

    while(scanf("%s", alf) != EOF){
        scanf("%d", &Npis);
        int lamp[Npis];

        for(i=0; i<Npis; ++i)
            scanf("%d", &lamp[i]);
        
        for(i=0; i<Npis; ++i)
            printf("%c", alf[lamp[i] - 1]);
    
        printf("\n");

    }



    return 0;
}