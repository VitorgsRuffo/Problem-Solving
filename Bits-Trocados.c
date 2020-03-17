#include <stdio.h>


int main (void){
    int V, c = 1, n50, n10, n5, n1, S;

    while(1){
        scanf("%d", &V);

        if(V == 0)  
            break;
        
        S = 0; n50 = 0; n10 = 0; n5 = 0; n1 = 0;

        while(1){
            if(S + 50 > V)  
                break;
            else{
                S += 50;
                ++n50;
            }
        }

        while(1){
            if(S + 10 > V)  
                break;
            else{
                S += 10;
                ++n10;
            }
        }

        while(1){
            if(S + 5 > V)  
                break;
            else{
                S += 5;
                ++n5;
            }
        }

        while(1){
            if(S + 1 > V)  
                break;
            else{
                S += 1;
                ++n1;
            }
        }

        printf("Teste %d\n", c);
        printf("%d %d %d %d\n\n", n50, n10, n5, n1);

        ++c;
    }

    return 0;
}