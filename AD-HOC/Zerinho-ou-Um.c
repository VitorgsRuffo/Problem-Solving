#include <stdio.h>

int main (void){
    int A, B , C;

    while(scanf("%d %d %d", &A, &B, &C) != EOF){
        if(A == B && A == C){
            printf("*\n");
        }else{
            if(A != B && A != C){
                printf("A\n");
            }else if(B != A && B != C){
                printf("B\n");
            }else if(C != A && C != B){
                printf("C\n");
            }
        }
    }



    return 0;
}