#include <stdio.h>

int main (void){
    int C, i, j, cm = 0;
    char Op;
    float mat[12][12], result = 0;

    scanf(" %d", &C);

    scanf(" %c", &Op);

   
    for(i = 0; i<12; ++i)
        for(j = 0; j<12; ++j)
            scanf(" %f", &mat[i][j]);
        
    

    if(Op == 'S'){
        for(i=0; i<12; ++i)
            result += mat[i][C];
        
        printf("%.1f\n", result);
        
    }else if(Op == 'M'){
        for(i=0; i<12; ++i){
            result += mat[i][C];
            ++cm;
        }       

        result /= cm;
        
        printf("%.1f\n", result);
    }

     getch();

    return 0;
}