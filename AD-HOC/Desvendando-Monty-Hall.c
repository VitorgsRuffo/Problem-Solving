#include <stdio.h>

int main (void){
    int N, i, C , Cv = 0;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        int porta[3] = {0};

        scanf("%d", &C);

        porta[C-1] = 1;
        
        if(porta[1] == 1){
            ++Cv;
        }else if(porta[2] == 1){
            ++Cv;
        }

    }

    printf("%d\n", Cv);




    return 0;
}