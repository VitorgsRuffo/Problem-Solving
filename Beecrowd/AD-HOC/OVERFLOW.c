#include <stdio.h>
#include <stdlib.h>

int main (void){
    int N, P, Q;
    char operacao;

    scanf("%d", &N);
     
    scanf("%d %c %d", &P, &operacao, &Q);
   
    if(operacao == '+'){
        if(P + Q > N)
            printf("OVERFLOW\n");
        else
            printf("OK\n");
    }else{
        if(P * Q > N)
            printf("OVERFLOW\n");
        else
            printf("OK\n");
    }
    
    return 0;
}