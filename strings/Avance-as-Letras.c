#include <stdio.h>
#include <string.h>

int main (void){
    int T, i, j, Ta, Qo;

    char A[100001], B[100001];

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        Qo = 0;

        scanf(" %s %s", A, B);

        Ta = strlen(A);

        for(j = 0; j<Ta; ++j){
            if(A[j] != B[j]){
                if(B[j] > A[j]){
                    Qo += (int) B[j] - (int) A[j];
                }else if(B[j] < A[j]){
                    Qo += (122 - (int) A[j]) + ((int)B[j] - 96);    
                }
            }
        }

        printf("%d\n", Qo);
    }



    return 0;
}