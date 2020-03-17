#include <stdio.h>

int main (void){
    int N, Num, i;
    
    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d", &Num);

        if(Num == 0){
            printf("NULL\n");
        }else if(Num > 0){
            if(Num % 2 == 0)
                printf("EVEN POSITIVE\n");
            else if(Num % 2 == 1)
                printf("ODD POSITIVE\n");
        }else if(Num < 0){
            if(Num % 2 == 0)
                printf("EVEN NEGATIVE\n");
            else if(Num % 2 == -1)
                printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}