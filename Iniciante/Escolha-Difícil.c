#include <stdio.h>

int main (void){
    int A ,B, C, a, b, c, Na = 0;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &a, &b, &c);

    if(A - a < 0)
        Na += (A - a);
    if(B - b < 0)
        Na += (B - b);
    if(C - c < 0)
        Na += (C - c);
    
    Na *= -1;

    printf("%d\n", Na);
    
    getch();

    return 0;
}