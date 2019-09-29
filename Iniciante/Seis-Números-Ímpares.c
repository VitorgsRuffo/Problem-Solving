#include <stdio.h>


int main(void){
    int X, i;

    scanf("%d", &X);

    
    for(i = 0; i<6; ++i){
        if(X % 2 == 1 && i == 0)
            printf("%d\n", X);
        
        else{
            if(i == 0){
                X += 1;
                printf("%d\n", X);
            }else{    
                X += 2;
                printf("%d\n", X);
            }
        }
        
    }

    getch();

    return 0;
}