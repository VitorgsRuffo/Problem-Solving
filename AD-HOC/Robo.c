#include <stdio.h>

int main (void){
    int L, C, A, B, i, j, Q1, indI, indJ;

    scanf("%d %d", &L, &C);
    scanf("%d %d", &A, &B);

    int chao[L][C];

    --A; --B;

    for(i = 0; i<L; ++i)
        for(j = 0; j<C; ++j)
            scanf("%d", &chao[i][j]);
        
    for(i = 0; i<L; ++i){
        for(j = 0; j<C; ++j){
            Q1 = 0;
            if((!(i == A && j == B)) && chao[i][j] == 1){
                if(i-1 > -1){
                    if(chao[i-1][j] == 1)
                        ++Q1;
                }

                if(i+1 < L){
                    if(chao[i+1][j] == 1)
                        ++Q1;
                }

                if(j-1 > -1){
                    if(chao[i][j-1] == 1)
                        ++Q1;
                }

                if(j+1 < C){
                    if(chao[i][j+1] == 1)
                        ++Q1;
                }

                if(Q1 == 1){
                    indI = i + 1;
                    indJ = j + 1;
                    break;
                }
            }
        }

        if(Q1 == 1)     
            break;       
    }

    printf("%d %d\n", indI, indJ);
    

    getch();




    return 0;
}