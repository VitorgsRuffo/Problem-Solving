#include <stdio.h>


int main (void){
    int N, i, Q = 1, Mc = 0;

    scanf("%d", &N);

    long int vet[N];

    for(i=0; i<N; ++i)
        scanf("%li", &vet[i]);
    
    for(i = 1; i<N; ++i){
        if(vet[i] == vet[i-1])
            ++Q;
        else{
            if(Q > Mc){
                Mc = Q;
                Q = 1;
            }else
                Q = 1;
        }

        if(i == N-1)
            if(Q > Mc)
                Mc = Q;
        

    }



    printf("%d\n", Mc);
    getch();

    return 0;
}