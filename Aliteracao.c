#include <stdio.h>
#include <string.h>

int main (void){
    char string[5100], currentL[2];
    int Ts, i, Qi, QcL;

    while(scanf(" %[^\n]s", string) != EOF){
        Ts = strlen(string);

        Qi = 0;
        
        currentL[0] = string[0];
        if(currentL[0] >= 65 && currentL[0] <= 90){
            currentL[1] = currentL[0] + 32;
        }else if(currentL[0] >= 97){
            currentL[1] = currentL[0] - 32;
        }

        QcL = 1;

        for(i = 1; i < Ts; ++i){
            if(string[i-1] == ' '){
                if(string[i] == currentL[0] || string[i] == currentL[1]){
                    ++QcL;
                    if(QcL == 2)
                        ++Qi;
                }else{
                    QcL = 1;

                    currentL[0] = string[i];
                    if(currentL[0] >= 65 && currentL[0] <= 90){
                        currentL[1] = currentL[0] + 32;
                    }else if(currentL[0] >= 97){
                        currentL[1] = currentL[0] - 32;
                    }
                }
            }
        }

        printf("%d\n", Qi);
    }



    return 0;
}