#include <stdio.h>
#include <math.h>

int main (void){
    int N, k, j, Sum;

    scanf("%d", &N);
    char msg[N][3];

    for(k = 0; k<N; ++k){

        Sum = 0;

        for(j = 1; j > -1; --j){

            scanf(" %c", &msg[k][j]);

            switch(msg[k][j]){
                case 'A':
                    Sum += (10 * pow(16, j));
                    break;
                case 'B':
                    Sum += (11 * pow(16, j));
                    break;
                case 'C':
                    Sum += (12 * pow(16, j));
                    break;
                case 'D':
                    Sum += (13 * pow(16, j));
                    break;
                case 'E':
                    Sum += (14 * pow(16, j));
                    break;
                case 'F':
                    Sum += (15 * pow(16, j));
                    break;
                default:
                    Sum += ((msg[k][j] - '0') * pow(16, j));
                    break;
            }

        }

        printf("%c",  (char) Sum);
    }

    printf("\n");






    return 0;
}