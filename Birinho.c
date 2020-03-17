#include <stdio.h>

int main (void){
    int TT, Tu, W, C;
    int Pu;

    while(scanf("%d %d %d %d", &TT, &Tu, &W, &C) != EOF){
        
        Pu = (100*Tu)/TT;

        if(Pu >= W && Pu < C){
            printf("warning\n");
        }else if(Pu >= C){
            printf("critical\n");
        }else if(Pu < W){
            printf("OK\n");
        }


    }




    return 0;
}