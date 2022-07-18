#include <stdio.h>

int main (void){
    int N, i, j, M, T = 0, T2 = 0, T3 = 0, indi, indj, Vo = 0;

    scanf("%d", &N);

    int Q[N][N];

    for(i = 0; i<N ; ++i)
        for(j = 0; j<N ; ++j)
            scanf("%d", &Q[i][j]);
        
   

    for(i = 0; i<N ; ++i)
        T += Q[i][0];
    
    for(i = 0; i<N ; ++i)
        T2 += Q[i][1];

    for(i = 0; i<N ; ++i)
        T3 += Q[i][3];
    
    if(T == T2 || T == T3)
        M = T;
    else if(T2 == T3)
        M = T2;

    

    for(i = 0; i<N ; ++i){
        T = 0;
        for(j = 0; j<N ; ++j){
            T += Q[i][j];
        }

        if(T != M)
            indi = i;
    }

    

    for(j = 0; j<N ; ++j){
        T = 0;
        for(i = 0; i<N ; ++i){
            T += Q[i][j];
        }

        if(T != M)
            indj = j;
    }
   
    for(i = 0; i<N; ++i){
        if(i != indi)
            Vo += Q[i][indj];
    }

    Vo = M - Vo;
 
    printf("%d %d\n",Vo, Q[indi][indj]);
    


    return 0;
}