#include <stdio.h>

int main (void){
    int N = -1, A, B, Ca, Cb, i;

    while(N != 0){
        Ca = 0;
        Cb = 0;
        scanf("%d", &N);

        if(N != 0){
            for(i = 0; i<N; ++i){
                scanf("%d %d", &A, &B);

                if(A>B)
                    ++Ca;
                else if (B > A)
                    ++Cb;   
            }
        }
        
        if(N != 0)
            printf("%d %d\n", Ca, Cb);
    }

    return 0;
}