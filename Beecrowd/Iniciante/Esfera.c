#include <stdio.h>

int main (void){
    double vol, raio;

    scanf("%lf", &raio);

    vol = (4/3.0) * 3.14159 * (raio * raio * raio);

    printf("VOLUME = %.3f\n", vol);

    getch();
    
    return 0;
}