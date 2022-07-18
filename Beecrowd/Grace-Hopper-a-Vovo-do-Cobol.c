#include <stdio.h>
#include <string.h>


int main (void){
    char Letrasi[6], Letrasf[6];
    char frase[51];
    int i, Tf, x, y, t;

    while(scanf(" %s", frase) != EOF){
        Tf = strlen(frase);

        Letrasi[0] = frase[0];
        x = 1;
        y = 0;

        for(i = 1; i<Tf-1; ++i){
            if(frase[i-1] == '-'){
                Letrasi[x] = frase[i];
                ++x;
            }

            if(frase[i+1] == '-'){
                Letrasf[y] = frase[i];
                ++y;
            }
        }

        Letrasf[4] = frase[Tf-1];

        t = 0;

        for(i = 0; i<5; ++i){
            switch(i){
                case 0:
                    if(Letrasi[0] == 'C' || Letrasi[0] == 'c' || Letrasf[0] == 'C' || Letrasf[0] == 'c')
                        ++t;
                    break;
                case 1:
                    if(Letrasi[1] == 'O' || Letrasi[1] == 'o' || Letrasf[1] == 'O' || Letrasf[1] == 'o')
                        ++t;
                    break;
                case 2:
                    if(Letrasi[2] == 'B' || Letrasi[2] == 'b' || Letrasf[2] == 'B' || Letrasf[2] == 'b')
                        ++t;
                    break;
                case 3:
                    if(Letrasi[3] == 'O' || Letrasi[3] == 'o' || Letrasf[3] == 'O' || Letrasf[3] == 'o')
                        ++t;
                    break;
                case 4:
                    if(Letrasi[4] == 'L' || Letrasi[4] == 'l' || Letrasf[4] == 'L' || Letrasf[4] == 'l')
                        ++t;
                    break;
            }
        }

        if(t >= 5)
            printf("GRACE HOPPER\n");
        else
            printf("BUG\n");


    } 




    return 0;
}