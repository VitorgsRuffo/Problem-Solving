#include <stdio.h>
#include <stdlib.h>

int main (void){
    long long int A , B;

    while(scanf("%lld %lld", &A, &B) != EOF){
        B = A - B;
        A = llabs(B);
        printf("%lld\n", A);
    }

    





    return 0;
}