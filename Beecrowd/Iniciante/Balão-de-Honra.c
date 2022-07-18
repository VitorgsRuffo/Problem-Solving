#include <stdio.h>

int main (void){
    char L;
    int Pos;

    scanf(" %c", &L);

    Pos = L + 1 - 65;

    printf("%d\n", Pos);

    getch();



    return 0;
}