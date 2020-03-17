#include <stdio.h>

int main (void){
    int C, H, M , O, i;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf("%d %d %d", &H, &M, &O);
        if(H < 10)
            printf("0%d:", H);
        else
            printf("%d:", H);
        
        if(M < 10)
            printf("0%d - ", M);
        else 
            printf("%d - ", M);

        if(O == 1)
            printf("A porta abriu!\n");
        else if(O == 0)
            printf("A porta fechou!\n");       
    }



    return 0;
}