#include <stdio.h>

int main (void){
    int N , S = 1, i;

    scanf("%d", &N);

    for(i = N; i > 0; --i){
        S *= i;
    }

    printf("%d\n", S);

    getch();



    return 0;
}