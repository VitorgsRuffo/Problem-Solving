#include <stdio.h>
#include <string.h>

int main (void){
    int T, i, j;
    char jogadas[5][10] = {"pedra", "papel", "tesoura", "lagarto", "Spock"};
    char Sh[10];
    char Ra[10];
    int S, R ;

    scanf("%d", &T);

    for(i = 1; i < T + 1; ++i){
        scanf("%s", Sh);
        scanf("%s", Ra);
        

        for(j = 0; j<5; ++j){
            if(strcmp(Sh, jogadas[j]) == 0)
                S = j;
            if(strcmp(Ra, jogadas[j]) == 0)
                R = j;
        }

        switch(S){
            case 0:
                if(R == 3 || R == 2)
                    printf("Caso #%d: Bazinga!\n", i);   
                else if(R == 1 || R == 4)
                    printf("Caso #%d: Raj trapaceou!\n", i);
                else if(R == 0)
                    printf("Caso #%d: De novo!\n", i);
                break;
            case 1:
                if(R == 0 || R == 4)
                    printf("Caso #%d: Bazinga!\n", i);   
                else if(R == 3 || R == 2)
                    printf("Caso #%d: Raj trapaceou!\n", i);
                else if(R == 1)
                    printf("Caso #%d: De novo!\n", i);
                break;

            case 2:
                if(R == 1 || R == 3)
                    printf("Caso #%d: Bazinga!\n", i);   
                else if(R == 4 || R == 0)
                    printf("Caso #%d: Raj trapaceou!\n", i);
                else if(R == 2)
                    printf("Caso #%d: De novo!\n", i);
                break;
            case 3:
                if(R == 1 || R == 4)
                    printf("Caso #%d: Bazinga!\n", i);   
                else if(R == 2 || R == 0)
                    printf("Caso #%d: Raj trapaceou!\n", i);
                else if(R == 3)
                    printf("Caso #%d: De novo!\n", i);
                break;
            case 4:
                if(R == 2 || R == 0)
                    printf("Caso #%d: Bazinga!\n", i);   
                else if(R == 3 || R == 1)
                    printf("Caso #%d: Raj trapaceou!\n", i);
                else if(R == 4)
                    printf("Caso #%d: De novo!\n", i);
                break;
        }

    }

    getch();


    return 0;
}