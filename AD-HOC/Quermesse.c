#include <stdio.h>

int main (void){
    int N, i, k = 1, V;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;
        
        int vit[N];

        for(i = 0; i<N; ++i){
            scanf("%d", &vit[i]);
            if(vit[i] == i+1)
                V = vit[i];
        }

        printf("Teste %d\n%d\n\n", k, V);

        ++k;
    }


    return 0;
}