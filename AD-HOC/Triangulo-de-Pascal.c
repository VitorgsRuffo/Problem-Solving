#include <stdio.h>

int main (void){    
    int T, N, i, j, c, fat;
    unsigned long int S;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        S = 1;
        c = 2;
        fat = 1;
        scanf("%d", &N);

        if(N > 1)
            while(1){
                if(c > N)
                    break;
                
                fat *= 2;
                S += fat;




                ++c;
            }
           
        

        printf("%lu\n", S);
    }




    return 0;
}