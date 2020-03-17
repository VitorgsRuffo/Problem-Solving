#include <stdio.h>

int main (void){
    int N , S;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;

        S = 0;
        
        while(1){
            if(N <= 0)
                break;

            S += N*N;

            --N;
        }

        printf("%d\n", S);
        
    }



    return 0;
}