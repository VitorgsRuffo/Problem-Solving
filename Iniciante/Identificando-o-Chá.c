#include <stdio.h>

int main (void){
    int T, vet[5], i, c = 0;

    scanf("%d", &T);

    for(i = 0; i<5; ++i)
        scanf("%d", &vet[i]);
    

    for(i = 0; i<5; ++i)
        if(T == vet[i])
            ++c;

    printf("%d\n", c);

    return 0;
}