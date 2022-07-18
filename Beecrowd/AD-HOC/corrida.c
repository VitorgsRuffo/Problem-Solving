#include <stdio.h>

int main (void){
    int carros, voltas, i, j;

    scanf("%d %d", &carros, &voltas);

    int mat[carros][voltas+1];
    int vet[carros];

    for(i = 0; i<carros; ++i){
        mat[i][voltas] = 0;
    }

    for(i = 0; i<carros; ++i){
        for(j = 0; j<voltas; ++j){
            scanf("%d", &mat[i][j]);
            mat[i][voltas] += mat[i][j];
        }

        vet[i] = mat[i][voltas]; 
    }

    int K = carros, aux;

    while(1){
        if(K<=1)
            break;
        
        for(i = 0; i<K-1; ++i){
            if(vet[i] > vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }

        --K;
    }

    for(i = 0; i<3; ++i){
        for(j = 0; j<carros; ++j){
            if(vet[i] == mat[j][voltas]){
                printf("%d\n", j+1);
            }
        }
    }




    return 0;
}