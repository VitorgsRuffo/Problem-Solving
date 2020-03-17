#include <stdio.h>

int main (void){
    int N, P = 7;

    scanf("%d", &N);

    if(N <= 10){
        printf("7\n");
    }else if (N >= 11 && N <=30){
        P += N - 10;
        printf("%d\n", P);
    }else if(N >=31 && N <=100){
        P += (20 + (N-30)*2);
        printf("%d\n", P);
    }else if (N >=101){
        P += (20 + 140 +(N-100)*5);
        printf("%d\n", P);
    }


    return 0;
}