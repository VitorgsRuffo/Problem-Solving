#include <stdio.h>
#include <string.h>
 
int main (void){
    char string[51];
    int Ts, i;

    while(gets(string) != NULL){
        Ts = strlen(string);

        for(i = 0; i<Ts; ++i){
            if(string[i] >= 65 && string[i] <= 90){

                if( (int) string[i] + 13 <= 90){
                    string[i] = (int) string[i] + 13;
                
                }else{
                    string[i] = (64 + (string[i] + 13 - 90));
                } 

            }else if(string[i] >= 97 && string[i] <= 122){
                if( (int) string[i] + 13 <= 122){
                    string[i] = (int) string[i] + 13;
                
                }else{
                    string[i] = (96 + (string[i] + 13 - 122));
                } 
            
            }
        }

        printf("%s\n", string);
    }





    return 0;
}