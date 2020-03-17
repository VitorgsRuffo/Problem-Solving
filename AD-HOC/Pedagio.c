#include <stdio.h>

int main (void){
    int L, D, K, P, Ct = 0;

    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);

    Ct = (L/D)*P + K*L;

    printf("%d\n", Ct);

    return 0;
}