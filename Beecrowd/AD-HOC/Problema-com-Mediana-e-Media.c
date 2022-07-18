#include <stdio.h>

int main (void){
    long int A, B, C;


    while(1){
        scanf("%li %li", &A, &B);
        if(A == 0 && B == 0)
            break;

       
        C = A*3 - A - B;

        printf("%li\n", C);
    }





    return 0;
}