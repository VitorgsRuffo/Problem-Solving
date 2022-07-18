#include <stdio.h>

int main (void){
    long int N, i;
    

    scanf("%li", &N);
    int vet[N], S = 0, St = 0, ind;

    for(i=0; i<N; ++i){
        scanf("%d", &vet[i]);    
        S += vet[i];
    }

    S /= 2;

    for(i=0; i<N; ++i){
        St += vet[i];

        if(St == S){
            ind = i+1;
            break;
        }
    }

    printf("%d\n", ind);

    getch();




    return 0;
}