#include <stdio.h>

int main (void){
   int D, A, L, P;

   scanf("%d", &D);

   scanf("%d %d %d", &A, &L, &P);

   if(D > A || D > L || D > P)
       printf("N\n");
   else
       printf("S\n");
    
    return 0;
}
   