#include <stdio.h>

int main (void){
    int N, G, i, j, q_Runas;

    scanf("%d %d", &N, &G);

    char runa[N];
    int valorRuna[N];

    for(i = 0; i < N; ++i){
        scanf(" %c %d", &runa[i], &valorRuna[i]);
    }

    scanf("%d", &q_Runas);
    char runasRecitadas[q_Runas];

    for(i = 0; i<q_Runas; ++i)
        scanf(" %c", &runasRecitadas[i]);
        
    int valor_t_runas = 0;

    for(i = 0; i<q_Runas; ++i){
        for(j = 0; j<N; ++j){
            if(runasRecitadas[i] == runa[j]){
                valor_t_runas += valorRuna[j];
                break;
            }
        }
    }

    if(valor_t_runas >= G)
        printf("%d\nYou shall pass!\n", valor_t_runas);
    else
        printf("%d\nMy precioooous\n", valor_t_runas);
    
    getch();

    



    return 0;
}