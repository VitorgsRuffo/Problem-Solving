#include <stdio.h>
#include <math.h>

int main (void){
    int N, i, j, CX, CY, R1, R2;
    int Cf, Cb, Pf, Pb;
    int Cplayer;
    double d;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;
        
        N *= 2;

        scanf("%d %d %d %d", &CX, &CY, &R1, &R2);

        int jogada[N][2];

        Cf = 0; Cb = 0; Pf = 0; Pb = 0;
        
        Cplayer = 0;

        for(i = 0; i<N; ++i){

            if(Cplayer == 0)
                Cplayer = 1;
            else if(Cplayer == 1)
                Cplayer = 0;

            for(j = 0; j<2; ++j)
                scanf("%d", &jogada[i][j]);
            

            d = sqrt( pow(CX - jogada[i][0] , 2) + pow(CY - jogada[i][1], 2) );

            if(d >= R1 && d <= R2){
                if(Cplayer == 1)
                    ++Cb;       
                else if(Cplayer == 0)
                    ++Pb;
            }else if(d < R1){
                if(Cplayer == 1)
                    ++Cf;
                else if(Cplayer == 0)
                    ++Pf;
            }
    
        }

        if(Cf > Pf){
            printf("C > P\n");
        }else if(Pf > Cf){
            printf("P > C\n");
        }else if(Cf == Pf){
            if(Cb > Pb){
                printf("C > P\n");
            }else if(Pb > Cb){
                printf("P > C\n");
            }else if(Cb == Pb){
                printf("C = P\n");
            }
        }
        


    }


    return 0;
}