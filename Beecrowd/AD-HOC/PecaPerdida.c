#include <stdio.h>

int main (void){
    int N, i, j, t;

    scanf("%d", &N);

    int vet[N-1];

    for(i = 0; i<N-1; ++i)
        scanf("%d", &vet[i]);

    i = 1;
    while(1){
        t = 0;

        for(j = 0; j<N-1; ++j){
            if(i == vet[j])
                ++t;
        }

        if(t <= 0){
            printf("%d\n", i);
            break;
        }


        ++i;
    }
    /*for(i = 1; i<N-2; ++i){
        if(vet[i] + 1 != vet[i+1] || vet[i] - 1 != vet[i-1]){
            
        }
    }*/





    return 0;
}