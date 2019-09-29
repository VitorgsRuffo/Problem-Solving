#include <stdio.h>

int main (void){
    int N, X, S, c = 1, i;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        scanf("%d", &X);

        S = 0;
        
        for(i = 1; i<X; ++i){
            if(X % i == 0)
                S += i;
        }

        if(S == X)
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);

        ++c;
    }

    getch();


    return 0;
}