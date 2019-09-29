#include <stdio.h>
#include <math.h>

int main (void){
    double x1, x2, y1, y2, D;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4f\n", D);

    getch();

    return 0;
}