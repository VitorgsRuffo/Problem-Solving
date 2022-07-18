#include <stdio.h>
#include <string.h>


int main (void){
    int C, x, y, i, j, ind;

    scanf("%d", &C);

    char atq[C][201];

    for(i = 0; i<C; ++i){
        scanf(" %s", atq[i]);

        x = 0; y = 0;

        for(j = 1; j<200; ++j){
            if(atq[i][j] == 'a'){
                ++x;
            }else if(atq[i][j] == 'k'){
                ind = j;
                break;
            }
        }

        for(j = ind + 1; j<200; ++j){
            if(atq[i][j] == 'a'){
                ++y;
            }else 
                break;
        }

        x *= y;

        printf("k");

        for(j = 0; j<x; ++j)
            printf("a");

        printf("\n");
    }




    return 0;
}