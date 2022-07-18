#include <stdio.h>

int main (void){
    long int N, Q;

    while(scanf("%d", &N) != EOF){
        Q = 0;
        
        while(1){
            if(N <= 1)
                break;
            
            N /= 2;
            ++Q;
        }
        

            
        printf("%d\n", Q);
    }

    getch();


    return 0;
}