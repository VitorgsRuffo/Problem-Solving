#include <stdio.h>

int main (void){
    int c = 1, qp = 0;

    float V;

    while(1){
        if(c > 6)
            break;

       
        scanf("%f", &V);
        

        if(V > 0.0)
            ++qp;

        ++c;
    }

    printf("%d valores positivos\n", qp);

    return 0;
}