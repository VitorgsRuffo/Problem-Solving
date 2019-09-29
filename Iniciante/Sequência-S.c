#include <stdio.h>

int main (void){
    float S = 1.0;
    int i;

    for(i = 2; i<101; ++i){
        S += (float) 1/i;
    }

    printf("%.2f\n", S);
    getch();

    return 0;
}