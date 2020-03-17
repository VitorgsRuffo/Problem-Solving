#include <stdio.h>
#include <math.h>

int main (void){
    long long int N;
    double  P, M;

    scanf("%lli", &N);
    
    P = N/(log(N));

    M = 1.25506 * P;

    printf("%.1f %.1f\n", P, M);





    return 0;
}