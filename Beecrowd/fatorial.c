#include <stdio.h>


int fat(int X){
    int fat = 1, i;

    for(i = 1; i<=X; ++i)
        fat *= i;
    
    return fat;
}


int main (void){
    long N, sumtN = 0;
    int k = 0, X = 8;

    scanf("%li", &N);

    while(1){
        if(sumtN == N || X == 0)
            break;
        
        while(1){
            if(sumtN + fat(X) > N)
                break;
            else{
                sumtN += fat(X);
                ++k;
            }
        }

        --X;
    }

    printf("%d\n", k);

    getch();



    return 0;
}