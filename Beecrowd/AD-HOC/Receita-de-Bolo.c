#include <stdio.h>

int main (void){
    int A , B, C, a ,b ,c;

    scanf("%d %d %d", &A, &B, &C);

    a = A/2;
    b = B/3;
    c = C/5;

    if(a >= b){
        if(a > c)
            printf("%d\n", a);
        else
            printf("%d\n", c);
    }else{
        if(b > c)
            printf("%d\n", b);
        else
            printf("%d\n", c);
    }



    return 0;
}