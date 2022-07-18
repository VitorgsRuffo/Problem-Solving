#include <stdio.h>

int main (void){
    int N1, D1, N2, D2;
    double V1, V2;

    scanf("%d %d %lf", &N1, &D1, &V1);
    scanf("%d %d %lf", &N2, &D2, &V2);

    V1 /= 3.6; V2 /= 3.6;

    V1 = D1 / V1;
    V2 = D2 / V2;

    if(V1 < V2){
        printf("%d\n", N1);
    }else if(V2 < V1){
        printf("%d\n", N2);
    }

    getch();






    return 0;
}