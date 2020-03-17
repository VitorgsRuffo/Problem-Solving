#include <stdio.h>

int main (void){
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if(B < A && C >= B)
        printf(":)\n");
    else if(B > A && C <= B)
        printf(":(\n");
    else if(B > A && C > B && C-B < B-A)
        printf(":(\n");
    else if(B > A && C > B && C-B >= B-A)
        printf(":)\n");
    else if(B < A && C < B && B - C < A - B)
        printf(":)\n");
    else if(B < A && C < B && B - C >= A - B)
        printf(":(\n");
    else if(A == B && C > B)
            printf(":)\n");
    else if(A == B && C < B)
            printf(":(\n");
    else 
        printf(":(\n");

    

    

    getch();


    return 0;
}