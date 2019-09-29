#include <stdio.h>

int main (void){
    int L;
    unsigned long int N, p;

    scanf("%lu %d", &N, &L);

    p = N * L;

    printf("%lu\n", p);

    
    getch();


    return 0;
}