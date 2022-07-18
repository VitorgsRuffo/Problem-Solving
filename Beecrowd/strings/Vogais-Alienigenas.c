#include <stdio.h>

int main (void){
    char vogal[50];
    char frase[200];
    int i, j, t, Qv;

    while(scanf(" %s", vogal) != EOF){
        scanf(" %[^\n]s", frase);

        Qv = 0;

        for(i = 0; i<200; ++i){
            if(frase[i] == '\0')
                break;
            t = 0;
            for(j = 0; j<50; ++j){
                if(vogal[j] == '\0')
                    break;
                
                if(frase[i] == vogal[j]){
                    ++t;
                    break;
                }
            }

            if(t > 0)
                ++Qv;
        }

        printf("%d\n", Qv);
    }

        



    return 0;
}