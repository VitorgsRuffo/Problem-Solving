#include <stdio.h>


int main (void){
    int N, A, B;

    scanf("%d", &N);
    scanf("%d %d", &A, &B);

    if(A + B > N)
        printf("Deixa para amanha!\n");
    else 
        printf("Farei hoje!\n");
    
    



    return 0;
}