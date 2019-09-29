#include <stdio.h>

int main (void){
    int T, i;
    
    while(scanf("%d", &T) != EOF){
        double vet[T], mv = 12.0;

        for(i = 0; i<T; ++i){
            scanf("%lf", &vet[i]);
            if(vet[i] < mv)
                mv = vet[i];
        }
        
        printf("%.2f\n", mv);

    }


    return 0;
}