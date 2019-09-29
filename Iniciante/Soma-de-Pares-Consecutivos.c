#include <stdio.h>

int main (void){
    int X = -1, i, S;

    while(X != 0){
    
        scanf("%d", &X);
        
        
        if(X != 0){
            S = 0;
            for(i = 0; i<5; ++i){
                if(X % 2 == 0){

                    S += X;

                    X += 2;
                }else if(X % 2 == 1 || X % 2 == -1){

                    X += 1;

                    S += X;

                    X += 2;
                
                }
            }

            printf("%d\n", S); 
        }
        
    }

    return 0;
}