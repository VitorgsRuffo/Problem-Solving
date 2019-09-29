#include <stdio.h>

int main (void){
    int N , X, c = 1, cp, i;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;
        
        scanf("%d", &X);

        cp = 0;

        for(i = 1; i < X + 1; ++i)
            if(X % i == 0)
                ++cp;
        
        if(cp == 2)
            printf("%d eh primo\n", X);
        else 
            printf("%d nao eh primo\n", X);


        ++c;
    }


    return 0;
}