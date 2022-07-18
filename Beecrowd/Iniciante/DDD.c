#include <stdio.h>

int main (void){
    char city[8][20] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro",
                        "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    int cityddd[8] = {61, 71, 11, 21, 32, 19, 27, 31}, ddd , ct = 0, i, j;

    scanf("%d", &ddd);

    for(i = 0; i<8; ++i){
        if(ddd != cityddd[i])
            ++ct;
        else if(ddd == cityddd[i]){
            j = i;
            break;
        }
    }

    if(ct == 8){
        printf("DDD nao cadastrado\n");
    }else{
        printf("%s\n", city[j]);
    }

    


    return 0;
}