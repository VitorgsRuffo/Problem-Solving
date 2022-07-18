#include <stdio.h>

int main (void){
    int vet[5] = {0,0,0,0,0}, i, j, test = 0;

    for(i = 0; i<5; ++i){
        do{
            scanf("%d", &vet[i]);
        }while(vet[i]<1 || vet[i]>13);
    }

    for(i = 0; i<5; ++i){
        if(i!=4)
            if(vet[i] < vet[i+1])
                ++test;
    }

    

    if(test == 4)
        printf("C\n");
    else if(test == 0)
        printf("D\n");
    else
        printf("N\n");

    return 0;


}
