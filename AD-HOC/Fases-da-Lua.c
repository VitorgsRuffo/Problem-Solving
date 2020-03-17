#include <stdio.h>

int main (void){

    int A, B;

    scanf("%d %d", &A, &B);

    if(A <= B){
        if(B <= 2 && B >=0){
            printf("nova\n");
        }else if(B>=3 && B<=96){
            printf("crescente\n");

        }else if(B>= 97 && B<=100){
            printf("cheia\n");
        }
    }else if(B < A){
        
        if(B <= 2 && B >=0){
            printf("nova\n");
        }else if(B>=3 && B<=96){
            printf("minguante\n");

        }else if(B>= 97 && B<=100){
            printf("cheia\n");
        }
    }

    getch();




    return 0;
}