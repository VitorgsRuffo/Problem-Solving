#include <stdio.h>
#include <string.h>

int main (void){
    char who[6];
    char Thor[6] = {"Thor"};
    int C, N, i;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf("%s %d", who, &N);
        if(strcmp(who, Thor) == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    getch();



    return 0;
}