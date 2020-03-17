#include <stdio.h>
#include <string.h>


int main (void){
    int N, i;

    char A[1001], B[1001];

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf(" %s %s", A, B);

        if(strstr(A, B) == NULL){
            printf("nao encaixa\n");
        }else{
            printf("encaixa\n");
        }
    }

    return 0;
}