#include <stdio.h>

int main (void){
    int V, T, i, Ti;

    scanf("%d %d", &V, &T);

    for(i = 0; i<T; ++i){
        scanf("%d", &Ti);
        
        V += Ti;

        if(V > 100){
            V = 100;
        }else if(V < 0){
            V = 0;
        }

    }

    
    printf("%d\n", V);


    return 0;
}