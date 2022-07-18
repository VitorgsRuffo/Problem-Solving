#include <stdio.h>


int main (void){
    int N, i, vetcont[3] = {0};

    scanf("%d", &N);

    while(1){
        if(N <= 0)
            break;
        
        if(N >= 3600){
            N -= 3600;
            ++vetcont[0];
        }else if(N >= 60){
            N -= 60;
            ++vetcont[1];
        }else if(N > 0){
            vetcont[2] = N;

            N = 0;
        }

    }

    printf("%d:%d:%d\n", vetcont[0], vetcont[1], vetcont[2]);

    getch();

    return 0;
}