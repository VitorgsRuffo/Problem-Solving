#include <stdio.h>

int main (void){
    double sal, r;
    int p;

    scanf("%lf", &sal);

    if(sal >= 0.0 && sal <= 400.00){
        r = sal * 0.15;
        sal += r;
        p = 15;
    }else if(sal >= 400.01 && sal <= 800.00){
        r = sal * 0.12;
        sal += r;
        p = 12;
    }else if(sal >= 800.01 && sal <= 1200.0){
        r = sal * 0.1;
        sal += r;
        p = 10;
    }else if(sal >= 1200.01 && sal <= 2000.0){
        r = sal * 0.07;
        sal += r;
        p = 7;
    }else if (sal > 2000.0){
        r = sal * 0.04;
        sal += r;
        p = 4;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", sal, r, p);

    getch();

    return 0;
}