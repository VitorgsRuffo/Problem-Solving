#include <stdio.h>

int main (void){
    int I = 1, J = 60;

    while(1){
        if(J < 0)
            break;

        printf("I=%d J=%d\n", I, J);

        I += 3;
        J -= 5;
    }

    getch();

    return 0;
}