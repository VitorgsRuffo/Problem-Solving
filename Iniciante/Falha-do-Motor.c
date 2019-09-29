#include <stdio.h>

int main (void){
    int C, ant, i, ind = 0;

    scanf("%d", &C);

    int vet[C];

    for(i = 0; i<C; ++i)
        scanf("%d", &vet[i]);

    for(i = 1; i<C; i++){
        if(vet[i] < vet[i-1]){
            ind = i + 1;
            break;
        }
    }

    printf("%d\n", ind);
    

    
    


    return 0;
}