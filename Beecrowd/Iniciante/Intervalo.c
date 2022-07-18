#include <stdio.h>

int main (void){
    float V;

    scanf("%f", &V);

    if(V >=0 && V<=25){
        printf("Intervalo [0,25]\n");
    }else if(V >25 && V <=50){
        printf("Intervalo (25,50]\n");
    }else if(V > 50 && V <=75){
        printf("Intervalo (50,75]\n");
    }else if(V>75 && V <=100){
        printf("Intervalo (75,100]\n");
    }else{
        printf("Fora de intervalo\n");
    }
    
    getch();

    return 0;
}