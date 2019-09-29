#include <stdio.h>

int main(void){
    int q, x, y, a;

    scanf("%d", &q);
    for(int i = 0; i<q; ++i){
    
        scanf("%d %d", &x, &y);

        a = (x*y)/2;

        printf("%d cm2\n", a);
        
    }
    return 0;
}