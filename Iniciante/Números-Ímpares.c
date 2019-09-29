#include <stdio.h>

int main(void){
    int X, i, v = 1;

    scanf("%d", &X);

    while(v <= X){
        printf("%d\n", v);
        v += 2;
    }
        
    return 0;
}