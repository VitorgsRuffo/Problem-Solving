#include <stdio.h>

int main (void){
    int N, c = 3, x = 2, cx = 1, y = 1, y1 = 2 , cy = 0, sy = 3, z;

    scanf("%d", &N);

    printf("1 1 1\n1 2 2\n");

    if (N != 1){

        while(1){
            if(c > 2*N)
                break;
            
            if(cx > 2){
                cx = 1;
                ++x;
            }

            if(c % 2  == 1){
                y += sy;
                sy += 2;
            }else if (c % 2 == 0){
                y1 = y + 1;
            }

            if(c % 2  == 1){
                z = x * y;
            }else if (c % 2 == 0){
               z += 1;
            }
            
            if(c % 2  == 1){
                printf("%d %d %d\n", x, y, z);
            }else if (c % 2 == 0){
               printf("%d %d %d\n", x, y1, z);  
            }
            
            ++cx;

            ++c;
        }
    }

    getch();

    return 0;
}