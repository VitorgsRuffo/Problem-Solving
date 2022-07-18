#include <stdio.h>
#include <math.h>

int main (void){
    int N, i, x, y, C, B, R;

    scanf("%d", &N);


    for(i = 0; i < N; ++i){
        scanf("%d %d", &x, &y);
        C = -100*x + pow(y, 3);
        B = 2*pow(x, 2) + pow(5*y, 2);
        R = pow(3*x, 2) + pow(y, 2);

        if(C > B && C > R){
            printf("Carlos ganhou\n");
        }else if(B > C && B > R){
            printf("Beto ganhou\n");
        }else if(R > C && R > B){
            printf("Rafael ganhou\n");
        }
    }



    return 0;
}