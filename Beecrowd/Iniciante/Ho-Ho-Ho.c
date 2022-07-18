#include <stdio.h>

int main (void){
    int N, i;

    scanf("%d", &N);

    for(i = 1; i < N + 1; ++i){
        printf("Ho");
        if(i != N)
            printf(" ");
        else
            printf("!\n");
        
    }

    return 0;
}