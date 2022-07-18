#include <stdio.h>

int main (void){
    int N, i, c;
    double C;

    scanf("%d", &N);
    
    for(i = 0; i<N; ++i){
        c = 0;
        scanf("%lf", &C);

        while(1){
            if( C <= 1.0)
                break;
            
            C /= 2.0;
            ++c;
        }

        printf("%d dias\n", c);
    }




    return 0;
}