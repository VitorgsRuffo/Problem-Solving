#include <stdio.h>

int main (void){
    int X, i;

    while(1){
        scanf("%d", &X);

        if(X == 0)
            break;

        for(i = 1; i < X + 1; ++i){
            printf("%d", i);
            if(i != X)
                printf(" ");
            else
                printf("\n");    
        }
        

    }

    getch();


    return 0;
}