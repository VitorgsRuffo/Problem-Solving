#include <stdio.h>

int main (void){
    int N, c = 1;
    float X, Y, q;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        scanf("%f %f", &X, &Y);

        if(Y == 0){
            printf("divisao impossivel\n");
        }else{
            q = X / Y;

            printf("%.1f\n", q);
        }

        ++c;
    }

    return 0;
}