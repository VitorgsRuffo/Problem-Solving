#include <stdio.h>



int main (void){
    int T, i, j;
    char fodase;

    while(scanf("%d", &T) != EOF){

        int poli[T][2];

        for(i = 0; i<T; ++i){
            for(j = 0; j<2; ++j){
                scanf("%d", &poli[i][j]);
                if(j == 0)
                    scanf(" %c", &fodase);
            }
            if(i != T-1)
                scanf(" %c", &fodase);
        }

        for(i = 0; i<T; ++i){
            poli[i][0] *= poli[i][1];
            --poli[i][1];
        }

        for(i = 0; i<T; ++i){
            printf("%d", poli[i][0]);
            if(poli[i][1] > 1){
                printf("x");
                printf("%d", poli[i][1]);
            }else if(poli[i][1] > 0)
                printf("x");
            
            if(i < T-1)
                printf(" + ");
            else
                printf("\n");
        }


    }
    
    getch();


    return 0;
}