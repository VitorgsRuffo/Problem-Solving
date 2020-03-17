#include <stdio.h>

int main (void){
    int N, K, i, j, k, Pf, C, t;

    while(1){
        scanf("%d %d", &N, &K);

        if(N == 0 && K == 0)
            break;
        
        int pgt[N], teste[N];

        for(i = 0; i<N; ++i){
            scanf("%d", &pgt[i]);
            teste[i] = 0;
        }
        
        Pf = 0;
        
        for(i = 0; i<N; ++i){
            C = 0;
            t = 0;
            for(k = 0; k<N; ++k){
                if(pgt[i] == teste[k])
                    ++t;
            }

            for(j = 0; j<N; ++j){
                if(t < 1){
                    if(pgt[i] == pgt[j]){
                        ++C;
                    }
                    
                }  
                
            }

            if(t<1)
                teste[i] = pgt[i];
            if(C >= K)
                ++Pf;
        }

        printf("%d\n", Pf);

    }





    return 0;
}