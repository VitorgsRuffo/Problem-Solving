#include <stdio.h>

int main (void){
    char nomes[10][31], i;

    for(i = 0; i<10; ++i)
        scanf("%s", &nomes[i]);

    printf("%s\n%s\n%s\n", nomes[2], nomes[6], nomes[8]);

    getch();



    return 0;
}