#include <stdio.h>

int main (void){
    int vet[26], i;

    vet[0] = 97;
    printf("%d e %c\n", vet[0], vet[0]);
    for(i = 1; i<26; ++i){
        vet[i] = vet[i-1] + 1;
        printf("%d e %c\n", vet[i], vet[i]);
    }


    getch();
    
    return 0;
}