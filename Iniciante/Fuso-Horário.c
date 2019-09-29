#include <stdio.h>

int main (void){
    int S, T, F, Hc;

    scanf("%d %d %d", &S, &T, &F);

    Hc = S + T + F;

    if(Hc == 24){
        Hc = 0;
    }else if(Hc > 24){
        Hc = Hc - 24;
    }else if(Hc < 0){
        Hc = 24 - (-Hc);
    }

    printf("%d\n", Hc);

    getch();


    return 0;
}