#include <stdio.h>

int main (void){
    int N, i, R = 0;

    scanf("%d", &N);

    int vet[N];

    for(i = 0; i<N; ++i){
        scanf("%d", &vet[i]);
        R += vet[i]-1;
    }

    printf("%d\n", R);
    
    getch();


    return 0;
}