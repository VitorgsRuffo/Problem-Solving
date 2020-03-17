#include <stdio.h>

int main (void){
    int V, i, c = 0;

    for(i = 0; i<5; ++i){
        scanf("%d", &V);
        if(V % 2 == 0)
            ++c;
    }

    printf("%d valores pares\n", c);   

    return 0;
}