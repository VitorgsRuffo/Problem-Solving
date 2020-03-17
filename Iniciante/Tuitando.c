#include <stdio.h>
#include <string.h>

int main (void){
    char T[500];
    int len;

    
    scanf("%[^\n]s", T);

    len = strlen(T);

    if(len <= 140)
        printf("TWEET\n");
    else if (len > 140)
        printf("MUTE\n");

    return 0;
}