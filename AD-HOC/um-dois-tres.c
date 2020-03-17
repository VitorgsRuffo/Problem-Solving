#include <stdio.h>
#include <string.h>


int main (void){
    int N, i;

    scanf("%d", &N);

    char word[6];

    for(i = 0; i<N; ++i){
        scanf(" %s", word);
        if(strlen(word) > 3){
            printf("3\n");
        }else{
            if( (word[0] == 'o' && word[1] == 'n') || (word[1] == 'n' && word[2] == 'e') || (word[0] == 'o' && word[2] == 'e') ){
                printf("1\n");
            }else if( (word[0] == 't' && word[1] == 'w') || (word[1] == 'w' && word[2] == 'o') || (word[0] == 't' && word[2] == 'o') ){
                printf("2\n");         
            }
        }
    }






    return 0;
}