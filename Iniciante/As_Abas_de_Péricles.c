#include <stdio.h>

int main(void){
    int N, M, Abas, i;
    char acao[7];

    scanf("%d %d", &N, &M);
    
    for(i = 0; i<M; ++i){
        scanf("%s" , acao);

        if(acao[0] == 'f')
            ++N;
        else if (acao[0] == 'c')
            --N;
    }

    printf("%d\n", N);

    return 0;
}