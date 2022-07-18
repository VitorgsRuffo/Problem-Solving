#include <stdio.h>

int main (void){
    int N, i, t = 0;

    scanf("%d", &N);

    int caixa[N];

    for(i = 0; i<N; ++i)
        scanf("%d", &caixa[i]);
    
    if(caixa[0] > 8){
        printf("N\n");
    }else{
        for(i = 0; i<N-1; ++i)
            if(caixa[i+1] - caixa[i] <= 8)
                ++t;
        

        if(t == N-1){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }

    getch();

    return 0;
}