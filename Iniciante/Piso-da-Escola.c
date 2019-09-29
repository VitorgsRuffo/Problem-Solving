#include <stdio.h>


int main (void){
    int i, j, t1, t2;

    scanf("%d", &i);
    scanf("%d", &j);

    t1 = i*j + (i-1)*(j-1);

    t2 = (i-1)*2 + (j-1)*2;

    printf("%d\n%d\n", t1, t2);
    getch();
    
    return 0;
}