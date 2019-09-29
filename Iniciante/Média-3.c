#include <stdio.h>

int main (void){
    float A, B, C , D, M;

    scanf("%f %f %f %f", &A, &B, &C, &D);

    M = (A*2 + B*3 + C*4 + D)/10;

    printf("Media: %.1f\n", M);

    if(M >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(M < 7.0 && M >= 5.0){
        printf("Aluno em exame.\n");

        scanf("%f", &A);

        printf("Nota do exame: %.1f\n", A);

        M = (M + A)/2;

        if(M >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", M);
        
    }else if(M < 5.0){
        printf("Aluno reprovado.\n");
    }


    getch();

    return 0;
}