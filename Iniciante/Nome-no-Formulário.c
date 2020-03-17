#include <stdio.h>
#include <string.h>

int main (void){
    char L[501];

    scanf("%[^\n]s", L);

    int length = strlen(L);

    if(length <= 80)
        printf("YES\n");
    else 
        printf("NO\n");


    return 0;
}