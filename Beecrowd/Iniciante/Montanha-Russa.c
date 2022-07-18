#include <stdio.h>

int main (void){
    int N, Am, AM, q, i;

    while(scanf("%d %d %d", &N, &Am, &AM) != EOF){
        int vet[N];

        q = 0;

        for(i = 0; i<N; ++i){
            scanf("%d", &vet[i]);
            if(vet[i] >= Am && vet[i] <= AM)
                ++q;
        }

        printf("%d\n", q);
    }



    return 0;
}