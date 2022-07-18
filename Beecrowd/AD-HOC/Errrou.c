#include <stdio.h>
#include <math.h>

int main (void){
    int C, i, j, N1, N2, Rp, Rc, ind;
    char op, equal;

    scanf("%d", &C);

    for(i = 0; i<C; ++i){
        scanf("%d %c %d %c %d", &N1, &op, &N2, &equal, &Rp);

        if(op == '+'){
            Rc = N1 + N2;
            if(Rc != Rp)
                ind = abs(Rc - Rp);

        }else if(op == '-'){
            Rc = N1 - N2;
            if(Rc != Rp)
                ind = abs(Rc - Rp);

        }else if(op  == 'x'){
            Rc = N1 * N2;
            if(Rc != Rp)
                ind = abs(Rc - Rp);
        }

        printf("E");

        for(j = 0; j<ind; ++j)
            printf("r");

        printf("ou!\n");

    }


    return 0;
}