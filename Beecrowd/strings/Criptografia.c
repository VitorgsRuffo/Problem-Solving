#include <stdio.h>

int main (void){
    int N, j, i, k, T, M;

    scanf("%d", &N);

    for(j = 0; j<N; ++j){
        char text[1001];

        scanf(" %[^\n]s", text);

        T = 0;

        for(i = 0; i<1001; ++i){
            if(text[i] == '\0')
                break;

            ++T;
            
            if( (text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122) ){
                text[i] += 3;
            }
        }


        char textinv[T];

        k = 0;

        for(i = T-1; i > -1; --i){
            textinv[k] = text[i];
            
            ++k;
        }
        
        M = T/2;

        for(i = M; i<T; ++i)
            textinv[i] -= 1;

        for(i = 0; i<T; ++i)
            printf("%c", textinv[i]);

        printf("\n");
    }




    return 0;
}