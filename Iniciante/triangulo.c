#include <stdio.h>
#include <math.h>

int main (void){
    int vet[4], i, j = -1, t = 0, vs = 0 , A, B, C;

    for(i = 0; i<4; ++i)
        scanf("%d", &vet[i]);
    
    A = vet[0];
    B = vet[1];
    C = vet[2];
    

    while(1){
        ++vs;
        if(t > 0 || vs > 4)
            break;
        
        if(abs(vet[1] - vet[2]) < vet[0] && vet[0] < vet[1] + vet[2] &&
           abs(vet[0] - vet[2]) < vet[1] && vet[1] < vet[0] + vet[2] &&
           abs(vet[0] - vet[1]) < vet[2] && vet[2] < vet[0] + vet[1]){
               ++t;
        }else{
            ++j;
            vet[0] = A;
            vet[1] = B;
            vet[2] = C;
            vet[j] = vet[3];
        }

        
    }

    if(t > 0)
        printf("S\n");
    else
        printf("N\n");

        getch();
    return 0;
}