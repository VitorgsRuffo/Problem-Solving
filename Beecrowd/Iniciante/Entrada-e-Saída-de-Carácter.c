#include <stdio.h>

int main (void){
    char A, B ,C;

    scanf(" %c", &A);
    scanf(" %c", &B);
    scanf(" %c", &C);

    printf("A = %c, B = %c, C = %c\n", A, B, C);
    printf("A = %c, B = %c, C = %c\n", B, C, A);
    printf("A = %c, B = %c, C = %c\n", C, A, B);

    getch();


    return 0;
}