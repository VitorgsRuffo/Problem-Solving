#include <stdio.h>

int main (void){
    int N, cn = 2, a = 2, b , c;

    scanf("%d", &N);

    printf("1 1 1\n");

    while(1){
        if(cn > N)
            break;

        b = a * a;

        c = a * a * a;

        printf("%d %d %d\n", a, b, c);

        ++a;

        ++cn;
    }

    return 0;
}