#include <stdio.h>

int main (void){
    int T, ct = 0, vet[1000], i;

    do{
        scanf("%d", &T);
    }while (T < 2 || T > 50);

    for(i = 0; i<1000; ++i){
        if(ct < T){
            vet[i] = ct;
            ++ct;
        }else{
            ct = 0;
            vet[i] = ct;
            ++ct;
        }

        printf("N[%d] = %d\n", i, vet[i]);
    }

    getch();

    return 0;
}