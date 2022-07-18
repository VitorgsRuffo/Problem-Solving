#include <stdio.h>

int main (void){
    int v, t, R;

    while(scanf("%d %d", &v, &t) != EOF){
        R = v*t*2;

        printf("%d\n", R);
    }

    

    return 0;
}