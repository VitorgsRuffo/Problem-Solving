#include <stdio.h>

int main (void){
    char N[1002];
    int vet[10], i, mv, ind;

    while(scanf(" %s", N) != EOF){
        for(i = 0; i<10; ++i)
            vet[i] = 0;
        
        mv = 0;
        
        for(i = 0; i<1001; ++i){
            if(N[i] == '\0')
                break;
            
            switch(N[i] - '0'){
                case 0:
                    ++vet[0];
                    break;
                case 1:
                    ++vet[1];
                    break;
                case 2:
                    ++vet[2];
                    break;
                case 3:
                    ++vet[3];
                    break;
                case 4:
                    ++vet[4];
                    break;
                case 5:
                    ++vet[5];
                    break;
                case 6:
                    ++vet[6];
                    break;
                case 7:
                    ++vet[7];
                    break;
                case 8:
                    ++vet[8];
                    break;
                case 9:
                    ++vet[9];
                    break;
            }
        }

        for(i = 0; i<10; ++i){
            if(vet[i] > mv){
                mv = vet[i];
                ind = i;
            }else if(vet[i] == mv){
                if (i > ind){
                    mv = vet[i];
                    ind = i;
                }
            }
        }

        printf("%d\n", ind);

    }



    return 0;
}