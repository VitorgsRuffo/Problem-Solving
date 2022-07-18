#include <stdio.h>

int main (void){
    int A, B, C, R1, R2, R3, t;

    scanf("%d %d %d", &A, &B, &C);

    R1 = 2*B + 4*C;
    R2 = 2*A + 2*C;
    R3 = 2*B + 4*A;

    if(R1 < R2){
        if(R1 < R3)
            t = R1;
        else
            t = R3;
    }else if (R2 < R1){
        if(R2 < R3)
            t = R2;
        else
            t = R3;
    }else if (R1 == R2){
        if(R1 < R3)
            t = R1;
        else 
            t = R3;
    }


    printf("%d\n", t);

    getch();






    return 0;
}