#include <stdio.h>

int main (void){
    int N, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

    scanf("%d", &N);

    int vet[N], i;
    
    for(i = 0; i<N; ++i){
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0)
            ++m2;
        if(vet[i] % 3 == 0)
            ++m3;
        if(vet[i] % 4 == 0)
            ++m4;
        if(vet[i] % 5 == 0)
            ++m5;
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", m2, m3, m4, m5);
    getch();

    return 0;
}