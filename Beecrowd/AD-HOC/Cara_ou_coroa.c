#include <stdio.h>

int main (void){
    int N = -1, m = 0, j = 0, i;

    while(N != 0){

        scanf("%d", &N);
        if(N != 0){
            
            int vet[N];


            for(i = 0; i<N; ++i){
                scanf("%d", &vet[i]);

                if(vet[i] == 0)
                    ++m;
                else if(vet[i] == 1)
                    ++j;
            }

            printf("Mary won %d times and John won %d times\n", m, j);

            m = 0;
            j = 0;

        }

    }

    return 0;
}