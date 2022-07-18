#include <stdio.h>

int main (void){
    int N, X, Y;
    double R;

    scanf("%d %d %d", &N, &X, &Y);

    R = (double) N / (X+Y); 

    printf("%.2lf\n", R);

    getch();


    return 0;
}