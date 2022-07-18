#include <stdio.h>

int main (void){
    double O, B, I;

    scanf("%lf %lf %lf", &O, &B, &I);

    if(O < B){
        if(O < I){
            printf("Otavio\n");
        }else if(I < O){
            printf("Ian\n");
        }else if(O == I){
            printf("Empate\n");
        }
    }else if(B < O){
        if(B < I){
            printf("Bruno\n");
        }else if(I < B){
            printf("Ian\n");
        }else if (B == I){
            printf("Empate\n");
        }
    }else if (B == O){
        printf("Empate\n");
    }








    return 0;
}