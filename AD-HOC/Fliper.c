#include <stdio.h>

int main (void){
    int P, R;

    scanf("%d %d", &P, &R);

    if(P == 1){
        if(R == 1){
            printf("A\n");
        }else if(R == 0){
            printf("B\n");
        }
    }else if(P == 0){
        printf("C\n");
    }



    return 0;
}