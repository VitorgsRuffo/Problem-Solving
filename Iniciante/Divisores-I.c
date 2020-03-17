#include <stdio.h>

int main (void){
    int N, c = 1;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;
        if(N % c == 0)
            printf("%d\n", c);

        ++c;
    }

    getch();

    return 0;
}