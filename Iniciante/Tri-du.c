#include <stdio.h>

int main (void){
    int A, B; 

    scanf("%d %d", &A, &B);

    if(A == B)
        printf("%d\n", A);
    else if (A != B){
        if(A > B)
            printf("%d\n", A);
        else
            printf("%d\n", B);
    }

    return 0;
}