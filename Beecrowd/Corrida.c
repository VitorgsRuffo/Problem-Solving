#include <stdio.h>

int main (void){
    int S, Va, Vb;
    double T;

    while(scanf("%d %d %d", &S, &Va, &Vb) != EOF){

        if(Vb >= Va){
            printf("impossivel\n");
        }else{
            Va -= Vb;

            T = (double)S/Va;

            printf("%.2f\n", T);
        }

    }





    return 0;
}