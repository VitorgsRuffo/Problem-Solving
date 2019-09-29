#include <stdio.h>
#include <math.h>

int main (void){
    int N;
    double Fib;

    scanf("%d", &N);

    Fib = (pow((1 + sqrt(5))/2, N) - pow((1 - sqrt(5))/2, N))/sqrt(5);

    printf("%.1f\n", Fib);

    getch();

    return 0;
}