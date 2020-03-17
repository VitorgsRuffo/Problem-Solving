#include <stdio.h>

int main (void){
    float S = 1;
    int i = 3, j = 2;

   while(1){
       if(i > 39)
            break;

        S += (float) i/j;
        
        i += 2;
        j *= 2;

   }
    

    printf("%.2f\n", S);

    getch();

    return 0;
}