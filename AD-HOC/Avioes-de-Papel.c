#include <stdio.h>

int main (void){
    int Comp, Tpa, Pc;

    scanf("%d %d %d", &Comp, &Tpa, &Pc);

    if(Pc * Comp <= Tpa)
        printf("S\n");
    else
        printf("N\n");






    return 0;
}