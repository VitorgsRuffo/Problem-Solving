#include <stdio.h>

int main (void){
    int L, Mn, Mv;

    while(scanf("%d", &L) != EOF){

        int vet[L], i;
        
        Mv = 0;

        for(i = 0; i<L; ++i){
            scanf("%d", &vet[i]);
            if(vet[i] > Mv)
                Mv = vet[i];
        }

        if(Mv < 10)
            Mn = 1;
        else if(Mv >= 10 && Mv < 20)
            Mn = 2;
        else if(Mv >= 20)
            Mn = 3;
        
        printf("%d\n", Mn);
        
    }
    


    return 0;
}