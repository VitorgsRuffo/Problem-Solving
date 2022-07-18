#include <stdio.h>

int main (void){
    int a, b, c, d, x, y, i;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(b == d){
        x = a + c;
        y = b;

        for(i = y; i > -1; --i){
            if(x % i == 0 && y % i == 0){
                x = x/i;
                y = y/i;
                break;
            }
        }

    }else{
        x = a * d + c * b;
        y = b * d;

        for(i = y; i > -1; --i){
            if(x % i == 0 && y % i == 0){
                x = x/i;
                y = y/i;
                break;
            }
        }

    }

    printf("%d %d\n", x, y);

    getch();


    return 0;
}