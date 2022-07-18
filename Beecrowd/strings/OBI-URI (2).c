#include <stdio.h>
#include <string.h>


int main (void){
    int N, i, T;

    scanf("%d", &N);

    char word[N][21];

    for(i = 0; i<N; ++i){
        scanf(" %s", word[i]);

        if(strlen(word[i]) == 3){
            if(word[i][0] == 'O'){
                if(word[i][1] == 'B'){
                    word[i][2] = 'I';
                }
            }else if(word[i][0] == 'U'){
                if(word[i][1] == 'R'){
                    word[i][2] = 'I';
                }
            }
        }

    }
    
    for(i = 0; i<N; ++i){
        if(i != N-1){
            printf("%s ", word[i]);
        }else{
            printf("%s\n", word[i]);
        }
        
    }

    getch();

    



    return 0;
}