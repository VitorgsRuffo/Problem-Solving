#include <stdio.h>

int main (void){
    int I, i;

    scanf("%d", &I);

    printf("Feliz Nat");

    for(i = 0; i<I; ++i){
        printf("a");
    }

    printf("l!\n");

    getch();
    
    return 0;
}