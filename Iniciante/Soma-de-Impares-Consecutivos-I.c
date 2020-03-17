#include <stdio.h>

int main (void){
    int X, Y, S = 0, Mv, mv;

    scanf("%d %d", &X, &Y);

    if(X > Y){
        Mv = X;
        mv = Y;
    }else{
        Mv = Y;
        mv = X;
    }

    if(mv % 2 == 0)
        ++mv;
    else if(mv % 2 == 1 || -1)
        mv += 2;
    
    if(mv < Mv){
        while(1){
            S += mv;
            mv += 2;
            if(mv >= Mv)
                break;
        }

        printf("%d\n", S);
    }else{
        printf("0\n");
    }



    return 0;
}