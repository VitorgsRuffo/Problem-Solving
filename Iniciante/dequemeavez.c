#include <stdio.h>
#include <string.h>

int main (void){
    int QT, i;
    char j1[10], j2[10];
    char jog1[6], jog2[6];
    int N1, N2;
    

    scanf("%d", &QT);

    for(i = 0; i<QT; ++i){
        scanf("%s %s %s %s", j1, jog1, j2, jog2);
        scanf("%d %d", &N1, &N2);

        if((N1 + N2) % 2 == 0){
            if(strcmp(jog1, "PAR") == 0)
                printf("%s\n", j1);
            else
                printf("%s\n", j2);
        }else if ((N1 + N2) % 2 == 1){
            if(strcmp(jog1, "IMPAR") == 0)
                printf("%s\n", j1);
            else
                printf("%s\n", j2);
        }
    }


    return 0;
}