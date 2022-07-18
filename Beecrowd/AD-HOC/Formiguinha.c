#include <stdio.h>

int main (void){
    int T, i, X;
    long int N;

    scanf("%d", &T);

    for(i=0; i<T; ++i){
        scanf("%li", &N);
        
        if(N % 2 == 0){
            X = N/2;
        }else if(N % 2 == 1){
            X = (N-1)/2 + 1;
        }

        printf("%d\n", X);
    }



    return 0;
}