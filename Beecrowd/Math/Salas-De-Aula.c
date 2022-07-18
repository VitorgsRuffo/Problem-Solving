#include <stdio.h>
#include <math.h>

int main (void){
    int B, U;

    while(scanf("%d %d", &B, &U) != EOF){
        if(B == U){
            printf("%d\n", abs(B-U));  
        }else{
            printf("%d\n", abs(B-U) - 1);  
        }
        
    }




    return 0;
}