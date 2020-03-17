#include <stdio.h>

int main (void){
    long R, L, Qb;
    double V;
    

    scanf("%li %li", &R, &L);

    V = (4.0/3.0) * 3.1415 * ((double)R * R * R);

    Qb = L / V;

    printf("%li\n", Qb);
    getch();




    return 0;
}