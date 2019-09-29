#include <stdio.h>

int main(void){
    int vet[4], i, k;

    for(i = 0; i<4; ++i){
        scanf("%d", &vet[i]);
        if(vet[i] == 1){
            k = i + 1;
        }
        
    }

    printf("%d\n", k);

    return 0;
}