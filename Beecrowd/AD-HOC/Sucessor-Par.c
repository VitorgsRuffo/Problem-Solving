#include <stdio.h>

int main (void){
    long int X;

    scanf("%li", &X);

    if(X % 2 == 0){
        printf("%li\n", X + 2);
    }else if(X % 2 == 1){
        printf("%li\n", X + 1);
    }



    return 0;
}