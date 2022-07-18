#include <stdio.h>

int main (void){
    int N, t = 1, i, A, B;
    char nome1[11], nome2[11];

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;

        scanf(" %s", nome1);  
        scanf(" %s", nome2);   

        printf("Teste %d\n", t);
        
        for(i = 0; i<N; ++i){
            scanf("%d %d", &A, &B);

            if((A + B) % 2 == 0){
                printf("%s\n", nome1);
            }else if((A + B) % 2 == 1){
                printf("%s\n", nome2);
            }
        }

        printf("\n");

        ++t;
    }


    return 0;
}