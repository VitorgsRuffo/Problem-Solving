#include <stdio.h>

int main (void){
    int X[5], Y[5], i;

    for(i=0; i<5; ++i)
        scanf("%d", &X[i]);

    for(i=0; i<5; ++i)
        scanf("%d", &Y[i]);

    for(i=0; i<5; ++i){
        if(X[i] == Y[i]){
            printf("N\n");
            break;
        }

        if(i >= 4)
            printf("Y\n");
    }
          



    return 0;
}