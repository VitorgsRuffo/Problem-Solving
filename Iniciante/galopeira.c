#include <stdio.h>
#include <string.h>

int main (void){
    int C, fat, i;
    char palavra[10001];
    double val;


    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf(" %s", palavra);
        fat = strlen(palavra);
        val = fat * 0.01;
        printf("%.2f\n", val);

    }


    return 0;
}