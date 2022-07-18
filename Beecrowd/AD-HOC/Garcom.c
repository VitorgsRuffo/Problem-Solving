#include <stdio.h>

int main (void){
    int N, i, L, C, Nt = 0;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d %d", &L, &C);
        if(L > C)
            Nt += C;
        
    }
    
    printf("%d\n", Nt);

    getch();


    return 0;
}