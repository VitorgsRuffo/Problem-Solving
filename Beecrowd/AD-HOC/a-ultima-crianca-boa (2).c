#include <stdio.h>
#include <string.h>

int main (void){
    char name[1000][81], aux[81] , name2[1000][81];
    int i = 0, j, K, Qn;

    
    
        while(scanf(" %[^\n]s", name[i]) != EOF){

            strcpy(name2[i], name[i]);

            ++i;
        }

        Qn = i;
        
    
    
    /*for(i = 0; i<4; ++i){
        scanf(" %s", name[i]);
        strcpy(name2[i], name[i]);
    }

    Qn = 4;*/

    for(i = 0; i<Qn; ++i){
        for(j = 0; j<81; ++j){
            if(name2[i][j] == '\0')
                break;
            
            if(name2[i][j] >= 65  && name2[i][j] <= 90 ){
                name2[i][j] += 32;
            }   
        }
    }

    K = Qn;

    while(1){
        if(K <= 1)
            break;
        
        for(i = 0; i<K-1; ++i){    
            if(strcmp(name2[i], name2[i+1]) > 0){
                strcpy(aux, name2[i]);
                strcpy(name2[i], name2[i+1]);
                strcpy(name2[i+1], aux);

                strcpy(aux, name[i]);
                strcpy(name[i], name[i+1]);
                strcpy(name[i+1], aux);

            }
        
        }

        --K;
    }

    printf("%s\n", name[Qn-1]);

    getch();



    return 0;
}