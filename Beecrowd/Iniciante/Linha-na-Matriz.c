#include <stdio.h>

int main (void){
    int L, i, j, cm = 0;
    char Op;
    float mat[12][12], result = 0;

    scanf(" %d", &L);

    scanf(" %c", &Op);

   
    for(i = 0; i<12; ++i)
        for(j = 0; j<12; ++j)
            scanf(" %f", &mat[i][j]);
        
    

    if(Op == 'S'){
        for(j=0; j<12; ++j)
            result += mat[L][j];
        
        printf("%.1f\n", result);
        
    }else if(Op == 'M'){
        for(j=0; j<12; ++j){
            result += mat[L][j];
            ++cm;
        }       

        result /= cm;
        
        printf("%.1f\n", result);
    }

     getch();

    return 0;
}