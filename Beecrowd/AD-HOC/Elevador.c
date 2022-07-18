#include <stdio.h>

int main (void){
    int Leituras, Capacidade, i, qAtual = 0;
    int Saiu, Entrou, T = 0;

    scanf("%d %d", &Leituras, &Capacidade);

    for(i = 0; i<Leituras; ++i){
        scanf("%d %d", &Saiu, &Entrou);
        qAtual -= Saiu;
        qAtual += Entrou;
        if(qAtual > Capacidade)
            ++T;
    }

    if(T > 0)
        printf("S\n");
    else
        printf("N\n");



    return 0;
}