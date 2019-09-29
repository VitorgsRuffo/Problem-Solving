#include <stdio.h>

int main (void){
    int N, n, i;

    scanf("%d", &N);

    for(i = 1; i < 10001; ++i)
        if(i % N == 2)
            printf("%d\n", i);
        

    return 0;
}