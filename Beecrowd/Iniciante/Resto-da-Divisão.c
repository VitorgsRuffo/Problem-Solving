#include <stdio.h>

int main(void){
    int x, y, mv, Mv, i;

    scanf("%d %d", &x, &y);

    if(x > y){
        Mv = x;
        mv = y;
    }else if(x < y){
        Mv = y;
        mv = x;
    }

    for(i = mv + 1; i < Mv; ++i){
        if(i % 5 == 2 || i % 5 == 3){
            printf("%d\n", i);
        }

    }

    if(x == 0 && y == 0)
        printf("0\n");

    getch();

    return 0;
}