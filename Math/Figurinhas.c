#include <stdio.h>

int main (void){
    int N, i, F1, F2, Mv, mv, k, resto, t;

    scanf("%d", &N);
    
    for(i=0; i<N; ++i){

        scanf("%d %d", &F1, &F2);

        if(F1 > F2){
            Mv = F1;
            mv = F2;
        }else{
            Mv = F2;
            mv = F1;
        }
        t = 0;
        while(1){
            ++t;
            if(Mv % mv == 0){
                if(t == 1)
                    resto = mv;
                
                printf("%d\n", resto);
                break;
            }else{
                resto = Mv % mv;
                Mv = mv;
                mv = resto;
            }
        }

    }



    return 0;
}