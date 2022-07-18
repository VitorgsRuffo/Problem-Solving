#include <stdio.h>


int main (void){
    int N, i, c = 1, Mm, Qm;

    while(1){
        scanf("%d", &N);

        if(N == 0)  
            break;
        
        int vet[N][2];
        
        Mm = 0; Qm = 0;

        for(i = 0; i<N; ++i){
            scanf("%d %d", &vet[i][0], &vet[i][1]);

            if(vet[i][1] > Mm)
                Mm = vet[i][1];
        }   

        printf("Turma %d\n", c);

        for(i = 0; i<N; ++i)
            if(vet[i][1] == Mm)
                ++Qm;

        int aluno[Qm], j = 0;

        for(i = 0; i<N; ++i){
            if(vet[i][1] == Mm){
                aluno[j] = vet[i][0];
                ++j;
            }
        }

        for(i = 0; i<Qm; ++i){
            if(i < Qm-1){
                printf("%d ", aluno[i]);
            }else{
                printf("%d \n\n", aluno[i]);
            }
        }


        ++c;
    }





    return 0;
}