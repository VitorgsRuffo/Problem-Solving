#include <stdio.h>

int main(void){
    int N, contn = 1, X, Y, conty, S;

    
        scanf("%d", &N);
    

    while(1){
        if(contn > N)
            break;
        
        scanf("%d %d", &X, &Y);
      

        S = 0;
        conty = 1;

        while(1){
            if(conty > Y)
                break;

            if(X % 2 == 0){
                X += 1;

                S += X;

                X += 2;
            }else if(X % 2 == 1 || X % 2 == -1){
                S += X;

                X += 2;
            }

            ++conty;
        }

        printf("%d\n", S);

        ++contn;
    }


    return 0;
}