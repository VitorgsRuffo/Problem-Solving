#include <stdio.h>


int main (void){
    int T, Vm;
    double L;

    scanf("%d %d", &T, &Vm);

    L = (double) (T * Vm)/12;

    printf("%.3f\n", L);
    getch();


    return 0;
}