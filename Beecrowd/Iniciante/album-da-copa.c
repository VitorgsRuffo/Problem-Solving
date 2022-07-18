#include <stdio.h>

int main (void){
    int N, M, m = 0;

    scanf("%d", &N);
    scanf("%d", &M);

    int figcomp[M], figuras[N], figf = N, i, j;

    for(i = 0; i<M; ++i)
        scanf("%d", &figcomp[i]);
    
    for(i = 0; i<N; ++i)    
        figuras[i] = i + 1;

    for(i = 0; i<N; ++i)
        for(j = 0; j<M; ++j)
            if(figuras[i] == figcomp[j]){
                --figf;
                break;
            }
        
        
    printf("%d\n", figf);


    getch();

   



    return 0;
}