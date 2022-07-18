#include <stdio.h>
#include <string.h>

int main (void){
    int T, x, Ts, Tv, i;

    scanf("%d", &T);

    char string[17];

    for(x = 0; x<T; ++x){
        scanf(" %s", string);

        Ts = strlen(string);
        Tv = 1;

        for(i = 0; i<Ts; ++i){
            if(string[i] == 'a' || string[i] == 'A'){
                Tv *= 3;
            }else if(string[i] == 'e' || string[i] == 'E'){
                Tv *= 3;
            }else if(string[i] == 'i' || string[i] == 'I'){
                Tv *= 3;
            }else if(string[i] == 'o' || string[i] == 'O'){
                Tv *= 3;
            }else if(string[i] == 's' || string[i] == 'S'){
                Tv *= 3;
            }else{
                Tv *= 2;
            }
        }
        printf("%d\n", Tv);


    }


    

    return 0;
}