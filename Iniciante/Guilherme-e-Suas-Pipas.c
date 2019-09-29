#include <stdio.h>

int main (void){
    long int N;
    double r;

    scanf("%li", &N);

    r = (double)(N-3)*((double)N/2);

    printf("%.0f\n", r);


    return 0;
}