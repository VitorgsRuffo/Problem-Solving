#include <stdio.h>


int main (void){
   long long X, anterior = 0, O;
    int t = 0, i = 0;

    while(scanf("%lli", &X) != EOF){
       

        if((anterior > X) && (!t)){
            O = anterior+1;
            ++t;
        }

        anterior = X;
    }

    anterior += 1;
    
    if(t > 0)   
        printf("%lli\n", O);
    else
        printf("%lli\n", anterior);
    




    return 0;
}