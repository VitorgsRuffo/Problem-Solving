#include <stdio.h>

int main (void){
    int H, P;
    double R;

    scanf("%d %d", &H, &P);

    R = (double) H / P;

    printf("%.2f\n", R);

    getch();

    return 0;
}