#include <stdio.h>

int main (void){
    int N, i, q;

    scanf("%d", &N);

    for(i = 1; i<N+1; ++i){
        if(i % 2 == 0){
            q = i*i;
            printf("%d^2 = %d\n", i, q);
        }
    }

    getch();


    return 0;
}