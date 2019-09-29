#include <stdio.h>

int main (void){
    int X, Z, S, c = 1;

    scanf("%d", &X);
    S = 0;
    do{
        scanf("%d", &Z);
    }while(Z <= X);

    while(1){
        S += X;

        if(S > Z)
            break;

        ++X; 

        ++c;
    } 

    printf("%d\n", c);

    getch();


    return 0;
}