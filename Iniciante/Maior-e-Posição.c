#include <stdio.h>

int main(void){
    int vet[100], i, MV = 0, ind;

    for(i = 0; i<100; ++i){
        scanf("%d", &vet[i]);
        if(vet[i] > MV){
            MV = vet[i];
            ind = i + 1;
        }
    }

    printf("%d\n%d\n", MV, ind);

    getch();

    return 0;
}