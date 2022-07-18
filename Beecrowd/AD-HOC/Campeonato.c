#include <stdio.h>

int main (void){
    int Cv, Ce, Cs, Fv, Fe, Fs, Pc, Pf;

    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    Pc = Cv*3 + Ce;
    Pf = Fv*3 + Fe;

    if(Pc > Pf){
        printf("C\n");
    }else if(Pf > Pc){
        printf("F\n");
    }else if(Pf == Pc){
        if(Cs > Fs){
            printf("C\n");
        }else if(Fs > Cs){
            printf("F\n");
        }else if(Fs == Cs){
            printf("=\n");
        }
    }



    return 0;
}