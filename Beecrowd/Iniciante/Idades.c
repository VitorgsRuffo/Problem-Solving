#include <stdio.h>

int main (void){
    int ID , c = 0;
    double M = 0.0;

    while(1){
        scanf("%d", &ID);
        if(ID < 0)
            break;
        
        M += ID;
        ++c;
    }

    M /= c;

    printf("%.2f\n", M);

    getch();

    return 0;
}