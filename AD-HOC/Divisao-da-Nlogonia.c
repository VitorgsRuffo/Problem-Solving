#include <stdio.h>

int main (void){
    int K, i, N, M, X, Y;

    while(1){
        scanf("%d", &K);
        if(K == 0)
            break;
        
        scanf("%d %d", &N, &M);

        for(i = 0; i<K; ++i){
            scanf("%d %d", &X, &Y);
            if(X == N || Y == M){
                printf("divisa\n");
            }else{
                if(X > N && Y > M){
                    printf("NE\n");
                }else if(X < N && Y > M){
                    printf("NO\n");
                }else if(X < N && Y < M){
                    printf("SO\n");
                }else if(X > N && Y < M){
                    printf("SE\n");
                }  
            }
        }
    }



    return 0;
}