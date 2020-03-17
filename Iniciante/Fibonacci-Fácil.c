#include <stdio.h>

int main(void){
    int A = 0, B = 1, C, N, i;

    scanf("%d", &N);

    if(N == 1)
        printf("0\n");
    else if(N == 2)
        printf("0 1\n");
    else if(N > 2){
        printf("0 1 ");
        
        for(i = 2; i<N; ++i){
            C = A + B;
            printf("%d", C);
            if(i < N - 1)
                printf(" ");
            else
                printf("\n");
            
            A = B;
            B = C;   
        }
        

    }
    
    getch();




    return 0;
}