#include <stdio.h>

int main (void){
    int T, i, A, B, C;
    double R;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        scanf("%d %d %d", &A, &B, &C);
        R = -1*((double)(B*B - 4 * A * C)/(double)(4*A));
        printf("%.2f\n", R);
    }




    return 0;
}