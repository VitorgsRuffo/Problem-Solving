#include <stdio.h>

int main (void){
    int N, c = 1, X, in = 0, out = 0;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        scanf("%d", &X);
        if(X >= 10 && X <= 20)
            ++in;
        else
            ++out;

        ++c;
    }

    printf("%d in\n%d out\n", in, out);

    return 0; 
}