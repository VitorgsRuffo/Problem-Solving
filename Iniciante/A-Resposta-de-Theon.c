#include <stdio.h>

int main (void){
    int N, c = 1, T, ct, mv = 101; 

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        scanf("%d", &T);

        if(T < mv && T != mv){
            ct = c;
            mv = T;
        }
        

        ++c;
    }

    

    printf("%d\n", ct);

    getch();

    return 0;
}