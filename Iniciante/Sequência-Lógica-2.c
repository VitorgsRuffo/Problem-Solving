#include <stdio.h>

int main (void){
    int X, Y , c = 0, i;

    scanf("%d %d", &X, &Y);

    for(i = 1; i < Y + 1; ++i){
        printf("%d", i);
        ++c;
        if(c >= X){
            printf("\n");
            c = 0;
        }else{
            printf(" ");
        }
    }

    getch();

    return 0;
}