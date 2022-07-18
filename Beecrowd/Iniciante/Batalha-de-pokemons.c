#include <stdio.h>

int main (void){
    int T, B, V1, A1, D1, L1, V2, A2, D2, L2, i;

    scanf("%d", &T);

    for(i = 0; i<T; ++i){
        scanf("%d", &B);
        scanf("%d %d %d", &A1, &D1, &L1);
        scanf("%d %d %d", &A2, &D2, &L2);

        V1 = (A1 + D1)/2;
        V2 = (A2 + D2)/2;

        if(L1 % 2 == 0)
            V1 += B;
        if(L2 % 2 == 0)
            V2 += B;
        
        if(V1 == V2)
            printf("Empate\n");
        else if(V1 > V2)
            printf("Dabriel\n");
        else
            printf("Guarte\n");
    }

    getch();

    return 0;
}