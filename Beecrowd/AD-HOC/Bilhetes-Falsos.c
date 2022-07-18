#include <stdio.h>

int main (void){
    int N, M, i, j, k, l, c, t;

    while(1){
        scanf("%d %d", &N, &M);
        if(N == 0 && M == 0)
            break;
        
        c = 0;
        l = 0;

        int bilhete[M];
        int verificar[M];

        for(i = 0; i<M; ++i){
            scanf("%d", &bilhete[i]);
            verificar[i] = 0;
        }

        for(i = 0; i<M; ++i){
            for(j = 0; j<M; ++j){

                t = 0;

                for(k = 0; k<M; ++k){
                   if(bilhete[i] == verificar[k])
                        t = 1;    
                }

                if(t >= 1)
                    break;
                else{
                    if(i != j){
                        if(bilhete[i] == bilhete[j]){
                            verificar[l] = bilhete[i];
                            ++l;
                            ++c;
                        }
                    }
                }    
            }  
        }

        printf("%d\n", c);

    }
    return 0;
}