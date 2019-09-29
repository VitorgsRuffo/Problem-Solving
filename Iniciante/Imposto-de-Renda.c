#include <stdio.h>

int main (void){
    double sal, imp = 0;
    int t = 0;
    scanf("%lf", &sal);
  
    if(sal >= 0.0 && sal <= 2000.0)
        ++t;
    else if(sal > 2000.0 && sal <= 3000.0)
        imp = (sal - 2000) * 0.08;
    else if(sal > 3000.0 && sal <= 4500.0)
        imp = 1000 * 0.08 + (sal - 3000) * 0.18;
    else if(sal > 4500.0)
        imp =  (sal - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08;

    

    if(!t)
        printf("R$ %.2f\n", imp);
    else 
        printf("Isento\n");
    
    getch();

    return 0;
}