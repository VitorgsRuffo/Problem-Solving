#include <stdio.h>

int main (void){
    int N, i, Mv, ind;

    

    while(1){
        scanf("%d", &N);

        if(N == 0)
            break;

        char planeta[N][51];
        int Rec[N], Temp[N];
        Mv = 2114;

        for(i = 0; i<N; ++i){
            scanf(" %s %d %d", &planeta[i], &Rec[i], &Temp[i]);
            Rec[i] -= Temp[i];
            if(Rec[i] < Mv){
                Mv = Rec[i];
                ind = i;
            }
        }

        printf("%s\n", planeta[ind]);

    }


    return 0;
}