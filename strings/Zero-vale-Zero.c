#include <stdio.h>


int main (void){
    long M, N, R;
    char Re[11];
    int i;
    while(1){

        scanf("%li %li", &M, &N);

        if(M == 0 && N == 0)
            break;
        
        R = M + N;

        sprintf(Re, "%li", R);

        for(i = 0; i<11; ++i){
            if(Re[i] == '\0')
                break;
            
            if(Re[i] != '0'){
                printf("%c", Re[i]);
            }
        }

        printf("\n");
    }




    return 0;
}