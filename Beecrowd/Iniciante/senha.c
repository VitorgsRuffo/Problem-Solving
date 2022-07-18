#include <stdio.h>

int main (void){
    int i = 1001;
    
    while(i < 10000){
        printf("%d\n", i-1);
        ++i;
    }

    return 0;
}