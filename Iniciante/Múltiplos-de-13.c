#include <stdio.h>


int main (void){
    int X, Y, Mv, mv, i, S = 0;

    scanf("%d %d", &X, &Y);

    if(X > Y){
        Mv = X;
        mv = Y;
    }else{
        Mv = Y;
        mv = X;
    }

    for(i = mv; i < Mv + 1; ++i)
        if(i % 13 != 0)
            S += i;
    
    printf("%d\n", S);
    
    getch();

    return 0;
}