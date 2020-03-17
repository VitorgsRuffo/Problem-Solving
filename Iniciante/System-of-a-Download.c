#include <stdio.h>

int main (void){
    int C, X, Y, S, i;
    char msc[11][15] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"}; 

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf("%d %d", &X, &Y);
        S = X + Y;
        printf("%s\n", msc[S]);
    }

    return 0;
}