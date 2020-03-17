#include <stdio.h>

int main(void){
    int A, B, C, D, d;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    d = A*B - C*D;

    printf("DIFERENCA = %d\n", d);

    getch();

    return 0;
}