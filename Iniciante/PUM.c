#include <stdio.h>

int main (void){
    int N, a = -3, b = -2, c = -1, i;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        a += 4;
        b += 4; 
        c += 4;
        printf("%d %d %d PUM\n", a, b, c);
    }

    getch();
    
    return 0;
}