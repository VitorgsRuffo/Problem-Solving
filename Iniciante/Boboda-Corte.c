#include <stdio.h>

int main (void){
    int N, i, Mv = 0;

    scanf("%d", &N);

    long int vet[N];

    for(i=0; i<N; ++i){
        scanf("%li", &vet[i]);
        if(vet[i] > Mv)
            Mv = vet[i];
    }

    if(Mv == vet[0])
        printf("S\n");
    else
        printf("N\n");



    return 0;
}