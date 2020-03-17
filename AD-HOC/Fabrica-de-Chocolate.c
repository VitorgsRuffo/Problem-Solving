#include <stdio.h>
#include <math.h>

int main (void){
    int A, B ,C, L;

    while(1){
        scanf("%d %d %d", &A, &B, &C);
        if(A == 0 && B == 0 && C == 0)
            break;

        L = pow(A*B*C, 1.0/3.0);

        printf("%d\n", L);    

    }




    return 0;
}