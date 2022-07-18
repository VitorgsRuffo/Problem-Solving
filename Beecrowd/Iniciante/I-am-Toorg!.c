#include <stdio.h>

int main (void){
    int N, c = 1;
    char vet[20];

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        setbuf(stdin, NULL);

        fgets(vet, 20, stdin);

        printf("I am Toorg!\n");


        ++c;
    }
    return 0;
}