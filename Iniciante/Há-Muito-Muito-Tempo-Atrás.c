#include <stdio.h>

int main (void){
    int N, T, A, i;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d", &T);

        A = 2015 - T;

        if(A == 0){
            printf("1 A.C.\n");
        }else if(A > 0){
            printf("%d D.C.\n", A);
        }else if(A < 0){
            A *= -1;
            printf("%d A.C.\n", A+1);
        }
    }

    getch();

    return 0;
}