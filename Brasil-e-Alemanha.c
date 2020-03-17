#include <stdio.h>
#include <math.h>


int main (void){
    long N, A, B;

    while(1){
        scanf("%li", &N);

        if(N == 0)
            break;
        
        A = ceil((7.0*N)/90.0);
        B = floor(N/90.0);
        
        printf("Brasil %li x Alemanha %li\n", B, A);
    }



    return 0;
}