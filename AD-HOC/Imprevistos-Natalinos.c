#include <stdio.h>


int main (void){
    int A, C, Cq, CsC;

    scanf("%d %d %d %d", &A, &C, &Cq, &CsC);

    C -= Cq + CsC;

    if(C > A){
        printf("Igor feliz!\n");
    }else{
        if(Cq > (CsC/2)){
            printf("Caio, a culpa eh sua!\n");
        }else{
            printf("Igor bolado!\n");
        }
    }

    getch();

    return 0;
}