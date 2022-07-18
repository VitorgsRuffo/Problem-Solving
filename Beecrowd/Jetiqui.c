#include <stdio.h>
#include <string.h>

int main (void){
    int C, x, y, t;

    scanf("%d", &C);
    char pal1[16], pal2[16], blank[16];

    int Tp, indb1, indb2;

    for(x = 0; x<C; ++x){
        scanf(" %s", pal1);
        scanf(" %s", pal2);
        scanf(" %s", blank);

        Tp = strlen(pal1);
        indb1 = 0; indb2 = 0; t = 0;

        for(y = 0; y<Tp; ++y){
            if(blank[y] == '_' && !indb1){
                indb1 = y;
            }else if(blank[y] == '_' && indb1){
                indb2 = y;
            }
        }

        if(pal1[indb1] == pal2[indb2] || pal1[indb2] == pal2[indb1]){
            ++t;
        }

        if(t>0)
            printf("Y\n");
        else
            printf("N\n");
    }




    return 0;
}