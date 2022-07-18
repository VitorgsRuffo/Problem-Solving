#include <stdio.h>

int main (void){
    int N, j, i, cont;

    scanf("%d", &N);

    for(j = 0; j<N; ++j){
        char num[102];

        scanf(" %s", num);

        cont = 0;

        for(i = 0; i<102; ++i){
            if(num[i] == '\0')
                break;
            
            switch(num[i] - '0'){
                case 1:
                    cont += 2;
                    break;
                case 2:
                    cont += 5;
                    break;
                case 3:
                    cont += 5;
                    break;
                case 4:
                    cont += 4;
                    break;
                case 5:
                    cont += 5;
                    break;
                case 6:
                    cont += 6;
                    break;
                case 7:
                    cont += 3;
                    break;
                case 8:
                    cont += 7;
                    break;
                case 9:
                    cont += 6;
                    break;
                case 0:
                    cont += 6;
                    break;
            }
        }

        printf("%d leds\n", cont);
    }





    return 0;
}