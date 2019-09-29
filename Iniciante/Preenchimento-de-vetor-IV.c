#include <stdio.h>

int main (void){
    int par[5], y = -1, impar[5], z = -1, i, N, j;

    for(j = 0; j<15; ++j){
        scanf("%d", &N);
        if(N % 2 == 0){
            ++y;
            if(y > 4){
                for(i = 0; i<5; ++i)
                    printf("par[%d] = %d\n", i, par[i]);
                y = 0;
            }
            par[y] = N;
            
        }else if (N % 2 == 1 || N % 2 == -1){
            ++z;
            if(z > 4){
                for(i = 0; i<5; ++i)
                    printf("impar[%d] = %d\n", i, impar[i]);
                z = 0;
            }
            impar[z] = N;
        }

    }

    for(i = 0; i < z + 1; ++i)
        printf("impar[%d] = %d\n", i, impar[i]);
    
    for(i = 0; i < y + 1; ++i)
        printf("par[%d] = %d\n", i, par[i]);

    getch();

    return 0;
}