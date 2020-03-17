#include <stdio.h>

int main (void){
    long N, i;
    int S;
    char linha[14];

    scanf("%li", &N);

    for(i = 0; i<N; ++i){
        S = 0;
        scanf(" %s", linha);

        S += (linha[2] - '0')*10 + (linha[3] - '0') + (linha[5] - '0')*100  + (linha[6] - '0')*10 + (linha[7] - '0') + (linha[11] - '0')*10 + (linha[12] - '0');

        printf("%d\n", S);

    }



    return 0;
}