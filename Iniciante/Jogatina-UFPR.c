#include <stdio.h>

int main (void){
    int N, I, i, id, game, c;

    while(scanf("%d %d", &N, &I) != EOF){
        c = 0;
        for(i = 0; i<N; ++i){
            scanf("%d %d", &id, &game);
            if(id == I && game == 0)
                ++c;
        }

        printf("%d\n", c);
    }


    return 0;
}