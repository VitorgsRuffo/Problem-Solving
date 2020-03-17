#include <stdio.h>

int main(void){
    int N, vetcont[3] = {0};

    scanf("%d", &N);

    while(1){
        if(N <= 0)
            break;
        
        if(N >= 365){
            N -= 365;
            ++vetcont[0];
        }else if(N >= 30){
            N -= 30;
            ++vetcont[1];
        }else if(N > 0){
            vetcont[2] = N;
            N = 0;
        }

    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", vetcont[0], vetcont[1], vetcont[2]);
    getch();

    return 0;
}