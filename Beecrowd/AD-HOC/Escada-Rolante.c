#include <stdio.h>

int main (void){
    int N, i, T;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;
        
        T = 10;

        int Pessoa[N];

        for(i = 0; i<N; ++i)
            scanf("%d", &Pessoa[i]);
        
        if(T > 1)
            for(i = 1; i<N; ++i){
                if(Pessoa[i] - Pessoa[i-1] < 10){
                    T += Pessoa[i] - Pessoa[i-1];
                }else{
                    T += 10;
                }
            }
        printf("%d\n", T);

    }





    return 0;
}
