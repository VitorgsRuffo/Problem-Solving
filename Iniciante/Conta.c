#include <stdio.h>

int main(void){
    int C, N, c = 1;
     

    scanf("%d", &C);

    while(1){
        if(c > C)
            break;

        scanf("%d", &N);


        if(N % 2 == 0)
            printf("0\n");
        else if(N % 2 == 1)
            printf("1\n");

        ++c;
    }

    getch();

    return 0;
}