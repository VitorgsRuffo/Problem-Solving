#include <stdio.h>

int main (void){
    int A, B, C, Mv;

    scanf("%d %d %d", &A, &B, &C);

    if(A > B){
        if(A > C)
            A = 0;
        else
            C = 0;
        
    }else{
        if(B > C)
            B = 0;
        else
            C = 0; 
    }

    if(A > B){
        if(A > C)
            Mv = A;
        else
            Mv = C;
        
    }else{
        if(B > C)
            Mv = B;
        else
            Mv = C; 
    }

    printf("%d\n", Mv);



    return 0;
}