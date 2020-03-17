#include <stdio.h>

int main (void){
    int N, x, y, L, i, j, hashSum;

    scanf("%d", &N);

    for(x = 0; x<N; ++x){
        scanf("%d" ,&L);

        char string[L][51];

        for(y = 0; y<L; ++y)
            scanf(" %s", string[y]);
        
        hashSum = 0;

        for(i = 0; i<L; ++i){
            for(j = 0; j<51; ++j){
                if(string[i][j] == '\0')
                    break;
                
                hashSum += ((int) string[i][j] - 65) + i + j;
            }
        }

        printf("%d\n", hashSum);
    }





    return 0;
}