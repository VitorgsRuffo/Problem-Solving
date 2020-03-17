#include <stdio.h>
#include <string.h>

int main (void){
    int N, K, i, j;

    scanf("%d %d", &N, &K);

    char nome[N][21], aux[21];

    for(i = 0; i<N; ++i)
        scanf(" %s", nome[i]);

    j = N;

    while(1){
        if(j<=1)
            break;
        
        for(i = 0; i < j - 1; ++i){
            if(strcmp(nome[i], nome[i+1]) > 0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[i+1]);
                strcpy(nome[i+1], aux);
            }
        }

        --j;
    }

    printf("%s\n", nome[K-1]);

    getch();
    






    return 0;
}