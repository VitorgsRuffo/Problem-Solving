#include <stdio.h>

int main (void){
    long int A, B, C, X, Y, Z, Q = 0;
    

    scanf("%li %li %li", &A, &B, &C);
    scanf("%li %li %li", &X, &Y, &Z);

    X /= A;
    Y /= B;
    Z /= C;

    Q = X*Y*Z;

    printf("%li\n", Q);



    return 0;
}