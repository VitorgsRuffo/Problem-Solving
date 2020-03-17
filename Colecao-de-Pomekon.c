#include <stdio.h>
#include <string.h>

int main (void){
    int N, i, j, Qp = 0, t;

    scanf("%d", &N);

    char poke[N][1001], test[N][1001];

    
    for(i = 0; i<N; ++i){

        scanf(" %s", poke[i]);

        t = 0;

        for(j = 0; j<N; ++j){
            if(strcmp(poke[i], test[j]) == 0)
                ++t;
        }

        if(t == 0){
            strcpy(test[i], poke[i]);
            ++Qp;
        }
    }

    printf("Falta(m) %d pomekon(s).\n", 151 - Qp);

    getch();
    
    return 0;
}