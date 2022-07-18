#include <stdio.h>
#include <math.h>

int main (void){

    int C, N, i;  
    double A;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf("%d", &N);

        A = 2.5 * N * (N/1.453);

        printf("%.3f\n", A); 
    }




    return 0;
}