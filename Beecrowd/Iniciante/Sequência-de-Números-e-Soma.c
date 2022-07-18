#include <stdio.h>

int main(void){
    int M, N, mv, Mv , S, i;

    while(1){
        scanf("%d %d", &M, &N);
        if(M <= 0 || N <= 0)
            break;
        
        if(M > N){
            Mv = M;
            mv = N;
        }else{
            Mv = N;
            mv = M;
        }
        S = 0;
        for(i = mv; i<Mv + 1; ++i){
            printf("%d ", i);
            S += i;
        }

        printf("Sum=%d\n", S);

    }

    return 0;
}