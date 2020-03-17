#include <stdio.h>

int main (void){
    int N, i, A = 0, E = 0, H = 0, M = 0, X = 0;
    char nome[15], R;

    scanf("%d", &N);

    for(i=0; i<N; ++i){
        scanf("%s %c", nome, &R);
        if(R == 'A')
            ++A;
        else if(R == 'E')
            ++E;
        else if(R == 'H')
            ++H;
        else if(R == 'M')
            ++M;
        else if(R == 'X')
            ++X;
    }

    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n", X, H, E, A, M);

    getch();

    return 0;
}