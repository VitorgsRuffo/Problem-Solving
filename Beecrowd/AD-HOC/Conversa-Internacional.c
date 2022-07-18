#include <stdio.h>
#include <string.h>

int main (void){
    int N, K, j, i, t;

    scanf("%d", &N);

    for(j = 0; j<N; ++j){
        scanf("%d", &K);

        char grupo[K][21];

        for(i = 0; i<K; ++i)
            scanf(" %s", grupo[i]);
        
        t = 0;
        for(i = 0; i<K-1; ++i)
            if(strcmp(grupo[i], grupo[i+1]))
                ++t;

        if(t>0){
            printf("ingles\n");
        }else if(t == 0){
            printf("%s\n", grupo[0]);
        }


    }




    return 0;
}