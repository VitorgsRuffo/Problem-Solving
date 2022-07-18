#include <stdio.h>
#include <string.h>


int main (void){
    int N, b = 0, m = 0, i, K;

    scanf("%d", &N);

    char nome[N][21], comp, aux[21];

    for(i = 0; i<N; ++i){
        scanf(" %c %s", &comp, nome[i]);
        if(comp == '+')
            ++b;
        else if(comp == '-')
            ++m;
    }

    K = N;

    while(1){
        if(K<=1)
            break;
        
        for(i = 0; i<K-1; ++i){
            if(strcmp(nome[i], nome[i+1]) > 0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[i+1]);
                strcpy(nome[i+1], aux);
            }
        
        }

        --K;
    }

    for(i = 0; i<N; ++i)
        printf("%s\n", nome[i]);
    
    printf("Se comportaram: %d | Nao se comportaram: %d\n", b, m);

    getch();

    return 0;
}