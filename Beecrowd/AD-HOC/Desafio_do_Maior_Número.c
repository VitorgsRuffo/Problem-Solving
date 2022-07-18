#include <stdio.h>

int main(void){
    int Gn = 0, num = -1;

    while(num !=0){
        scanf("%d", &num);

        if(num > Gn)
            Gn = num;
    }

    printf("%d\n", Gn);

    return 0;
}