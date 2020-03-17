#include <stdio.h>


int main (void){
    int G, vg = 0, I, vi = 0, emp = 0, resp = 1, gre = 0;

    while(resp != 2){
        scanf("%d %d", &I, &G);
        ++gre;
        if(G > I)
            ++vg;
        else if (I > G)
            ++vi;
        else if (G == I)
            ++emp;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &resp);
    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", gre, vi, vg, emp);

    if(vg > vi)
        printf("Gremio venceu mais\n");
    else if (vi > vg)
        printf("Inter venceu mais\n");
    else if(vg == vi)
        printf("Nao houve vencedor\n");

    getch();



    return 0;
}