#include <stdio.h>

int main (void){
    int C, i;
    long int N, M, qr;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        qr = 0;
        scanf("%li %li", &N, &M);
        if(N % M == 0)
            qr = N/M;
        else
            qr = N/M + 1;

        printf("%li\n", qr);
    }
    




    return 0;
}