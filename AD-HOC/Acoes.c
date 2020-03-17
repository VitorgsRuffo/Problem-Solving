#include <stdio.h>

int main (void){
    int D, I, X, F, Vf;

    scanf("%d %d %d %d", &D, &I, &X, &F);

    Vf = I;

    if(D % 2 == 0){
        if(F % 2 == 1){
            Vf += ((F-2)*X - (F-1)*X);
        }
    }else if (D % 2 == 1){
        if(F % 2 == 1){
            Vf += ((F-1)*X - (F-2)*X);
        }
    }

    printf("%d\n", Vf);

    return 0;
}