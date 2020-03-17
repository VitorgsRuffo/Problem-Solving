#include <stdio.h>
#include <string.h>


int main (void){
    int N, i, Ta, Tb, j, k, t;

    char A[11], B[11];

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf(" %s %s", A, B);

        Ta = strlen(A);
        Tb = strlen(B);

        k = Tb-1;
        t = 0;

        if(Ta >= Tb){
            for(j = Ta-1; j>Ta-1-Tb; --j){
                if(A[j] == B[k])
                    ++t;
                
                --k;
            }
        }
        
        if(t == Tb){
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}