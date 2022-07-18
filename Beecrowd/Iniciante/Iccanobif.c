#include <stdio.h>

int main (void){
    int N, i;

    scanf("%d", &N);

    int vet[N];

    if(N == 1){
        printf("1\n");
        return 0;
    }else if(N == 2){
        printf("1 1\n");
        return 0;
    }else if (N > 2){
        vet[0] = 1;
        vet[1] = 1;
    }

    for(i = 2; i<N; ++i)
        vet[i] = vet[i-1] + vet[i-2];
    
    for(i = N-1; i > -1; --i){
        printf("%d", vet[i]);
        if(i == 0)
            printf("\n");
        else
            printf(" ");
    }
    

    getch();



    return 0;
}