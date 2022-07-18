#include <stdio.h>
#include <string.h>

int main (void){
    char frase[51];
    int i, Qv = 0, j = 0, t = 0, t2, t3 = 0;

    scanf(" %s", frase);


    for(i = 0; i<51; ++i){
        if(frase[i] == '\0')
            break;
        
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            ++Qv;
        }
    }

    char vogais[Qv];
    
    for(i = 0; i<51; ++i){
        if(frase[i] == '\0')
            break;
        
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            vogais[j] = frase[i];
            ++j;
        }
    }
    
    i = 0; j = Qv-1;

   

        while(1){
            if(i == (Qv/2))
                break;
            
            if(vogais[i] == vogais[j])
                ++t;



            ++i; --j;
        }

        if(t == Qv/2)
            ++t3;

    if(t3 > 0) 
        printf("S\n");
    else
        printf("N\n");

    return 0;
}