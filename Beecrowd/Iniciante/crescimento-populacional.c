#include <stdio.h>

int main (void){
    int T, i, PA, PB, anos;
    double G1, G2;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        anos = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        G1 /= 100.0;
        G2 /= 100.0;

        while(1){
            if(PA > PB)
                break;
            if(anos > 100)
                break;
            
            PA =  PA*G1 + PA;
            PB =  PB*G2 + PB;

            ++anos; 
        }
        
        if(anos <= 100)
            printf("%d anos.\n", anos);
        else 
            printf("Mais de 1 seculo.\n");

    }   


    //getch();

    return 0;
}