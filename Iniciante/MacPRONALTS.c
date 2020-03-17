#include <stdio.h>

int main (void){
    int num[5] = {1001, 1002, 1003, 1004, 1005};
    double value[5] = {1.5, 2.5, 3.5, 4.5, 5.5}, total = 0;
    int P, num_, Q, ind, i, j;


    scanf("%d", &P);

    for(i = 0; i<P; ++i){
        scanf("%d %d", &num_, &Q);
        for(j = 0; j<5; ++j){
            if(num_ == num[j])
                ind = j;
        }

        total += Q * value[ind];
    }

    printf("%.2f\n", total);

    getch();

    return 0;
}