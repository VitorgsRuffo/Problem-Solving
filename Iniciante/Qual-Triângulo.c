#include <stdio.h>
#include <math.h>


int main (void){
    long long int A, B, C, aux;

    scanf("%lli %lli %lli", &A, &B, &C);

    if(A > C){
        aux = C;
        C = A;
        A = aux;
    }else if(B > C){    
        aux = C;
        C = B;
        B = aux;
    }

    if(abs(B-C) < A && A < B+C &&
       abs(A-C) < B && B < A+C &&
       abs(A-B) < C && C < A+B){
           if(A == B && B == C){
               printf("Valido-Equilatero\nRetangulo: N\n");
           }else if(A != B && B != C && A!= C){
               printf("Valido-Escaleno\n");
               if(C*C == A*A + B*B){
                   printf("Retangulo: S\n");    
               }else
                    printf("Retangulo: N\n");    
           }else if(A == B || B == C || A == C){
               printf("Valido-Isoceles\n");
               if(C*C == A*A + B*B){
                   printf("Retangulo: S\n");    
               }else
                    printf("Retangulo: N\n");    
           }

    }else
        printf("Invalido\n");
    

    getch();

    return 0;
}