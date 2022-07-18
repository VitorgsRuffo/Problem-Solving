#include <stdio.h>
#include <math.h>

int main (void){
    int A, B, C, V;

    while(1){

        scanf("%d %d %d", &A, &B, &C);

        if(A == 0)
            break;

        V = (A * B * 100) / C;

        V = sqrt(V);

        printf("%d\n", V);
    }

    return 0;
}