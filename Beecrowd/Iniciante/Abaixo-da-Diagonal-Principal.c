#include <stdio.h>

int main (void){
    float mat[12][12], S = 0, M = 0;
    char OP;
    int i, j, cm = 0;

    scanf("%c", &OP);

    for(i = 0; i<12; ++i)
        for(j = 0; j<12; ++j)
            scanf("%f", &mat[i][j]);

    if(OP == 'S'){
        for(i = 0; i<12; ++i){
            for(j = 0; j<12; ++j){
                if(i>j){
                    S += mat[i][j];
                }
            }
        }

        printf("%.1f\n", S);
    }else if(OP == 'M'){
        for(i = 0; i<12; ++i){
            for(j = 0; j<12; ++j){
                if(i>j){
                    M += mat[i][j];
                    ++cm;
                }
            }
        }

        M /= cm;

        printf("%.1f\n", M);
    }
       
    getch();

    return 0;
}