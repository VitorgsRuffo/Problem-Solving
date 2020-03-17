#include <stdio.h>


int main (void){
    int N, ind;

    scanf("%d", &N);

    int num[N], i; 
    double nota[N], Mn = 0; 

    for(i = 0; i<N; ++i){
        scanf("%d %lf", &num[i], &nota[i]);
        if(nota[i] > Mn){
            Mn = nota[i];
            ind = i;
        }
    }

    if(Mn >= 8)
        printf("%d\n", num[ind]);
    else
        printf("Minimum note not reached\n");

    getch();

    return 0;
}