#include <stdio.h>

int main (void){
    int A;
    float B;
    char C;
    char F[51];
    scanf("%d %f %c %[^\n]s", &A, &B, &C, F);
    printf("%d%.6f%c%s\n", A, B, C, F);
    printf("%d\t%.6f\t%c\t%s\n", A, B, C, F);
    printf("%10d%10.6f%10c%10s\n", A, B, C, F);
    
    getch();




    return 0;
}