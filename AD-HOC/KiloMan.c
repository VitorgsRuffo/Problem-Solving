#include <stdio.h>

int main (void){
    int N, i, j, T, Atingido;

    scanf("%d", &N);

    for(i=0; i<N; ++i){
        Atingido = 0;

        scanf("%d", &T);
        
        int alturaTiros[T];

        for(j=0; j<T; ++j)
            scanf("%d", &alturaTiros[j]);
        
        char acao[T+1];

        setbuf(stdin, NULL);
        scanf(" %s", acao);

        for(j=0; j<T; ++j){
            if(alturaTiros[j] <= 2){
                if(acao[j] == 'S')
                    ++Atingido;
            }else if(alturaTiros[j] <=7 && alturaTiros[j] > 2){
                if(acao[j] == 'J')
                    ++Atingido;
            }
        }

        printf("%d\n", Atingido);
        
    }




    return 0;
}