#include <stdio.h>

int main (void){
    int N, i, J, Z , D, c = 1, Sj, Sz;

    while(1){
        scanf("%d", &N);

        if(N == 0)
            break;

        printf("Teste %d\n", c);

        Sj = 0; Sz = 0;

        for(i = 0; i<N; ++i){
            scanf("%d %d", &J, &Z);

            Sj += J; Sz += Z;

            D = Sj - Sz;

            printf("%d\n", D);
        }

        printf("\n");

        ++c;
    }


    return 0;
}