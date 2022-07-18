#include <stdio.h>

int main (void){
    int N, C, M;

    scanf("%d %d %d", &N, &C, &M);

    int figcarimb[C], i, j;
    int figcomp[M];
    int figfalta = C;

    for(i = 0; i<C; ++i)
        scanf("%d", &figcarimb[i]);
    
    for(i = 0; i<M; ++i)
        scanf("%d", &figcomp[i]);
    
    for(i = 0; i<C; ++i)
        for(j = 0; j<M; ++j)
            if(figcarimb[i] == figcomp[j]){
                --figfalta;
                break;
            }
        
    printf("%d\n", figfalta);

    getch();
    
    




    return 0;
}