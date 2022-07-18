#include <stdio.h>

int main (void){
    int L = -1, R = -1;

    while(L != 0 && R != 0){
        scanf("%d %d", &L, &R);

        if(L != 0 && R != 0)
            printf("%d\n", L+R);
    }
    
    return 0;
}