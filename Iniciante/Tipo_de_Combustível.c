#include <stdio.h>

int main(void){
    int Al = 0, Gas = 0, Die = 0, resp = 0;

    while (resp !=4){
        do{
            scanf("%d", &resp);
        }while(resp < 0 || resp > 4);

        if(resp == 1)
            ++Al;
        else if(resp == 2)
            ++Gas;
        else if (resp == 3)
            ++Die;
    }   

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", Al, Gas, Die);

    return 0;
}