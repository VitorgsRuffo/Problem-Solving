#include <stdio.h>

int main (void){
    char Op;
    double mat[12][12], result = 0;
    int i, j, cm = 0;

    scanf("%c", &Op);

    for(i = 0; i<12; ++i){
        for(j = 0; j<12; ++j){
            scanf("%lf", &mat[i][j]);
            if((i + j < 11) && (i < j)){
                result += mat[i][j];
                ++cm;
            }
        }
    }

    if(Op == 'S')
        printf("%.1f\n", result);
    else if(Op == 'M'){
        result /= cm;
        printf("%.1f\n", result);
    }

    getch();
    


    return 0;
}