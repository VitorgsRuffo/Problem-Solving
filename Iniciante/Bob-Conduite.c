#include <stdio.h>


int main(void){
    int T, C1, C2, C, c = 1;

    scanf("%d", &T);

    while(1){
        if(c > T)
            break;

        scanf("%d %d", &C1, &C2);

        C = C1 + C2;

        printf("%d\n", C);

        ++c;
    }
    return 0;
}
