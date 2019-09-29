#include <stdio.h>

int main(void){
    int N, c = 0;
    char curso[100];

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        fgets(curso, 100, stdin);

        ++c;
    }

    printf("Ciencia da Computacao\n");

    getch();

    return 0;
}