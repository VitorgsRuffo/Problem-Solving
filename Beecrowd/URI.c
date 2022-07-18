#include <stdio.h>
#include <math.h>

int main (void){
    long N, U, R, I, i, Pu, Pr, Pi, S;
    int t1, t2, t3, t11, t22, t33, exp;

    while(1){
        scanf("%li", &N);

        Pu = 0; Pr = 0; Pi = 0;

        if(N == 0)
            break;
        
        for(i = 0; i<N; ++i){
            scanf("%li %li %li", &U, &R, &I);

            t1 = 0; t2 = 0; t3 = 0;
            t11 = 0; t22 = 0; t33 = 0;

            exp = 1;

            while(1){
                if(t1 == 1 && t2 == 1 && t3 == 1)
                    break;

                S = pow(2, exp);

                if(S == U && t1 == 0){
                    ++t1;
                    ++t11;
                }else if(S > U && t1 == 0){
                    ++t1;
                }

                if(S == R && t2 == 0){
                    ++t2;
                    ++t22;
                }else if(S > R && t2 == 0){
                    ++t2;
                }

                if(S == I && t3 == 0){
                    ++t3;
                    ++t33;
                }else if(S > I && t3 == 0){
                    ++t3;
                }

                ++exp;
            }

            

            if(t11){
                ++Pu;
                if(U > R && U > I)
                    ++Pu;
            }

            if(t22){
                ++Pr;
                if(R > U && R > I)
                    ++Pr;
            }

            if(t33){
                ++Pi;
                if(I > U && I > R)
                    ++Pi;
            }
        }


        if(Pu > Pr && Pu > Pi)
            printf("Uilton\n");
        else if(Pr > Pu && Pr > Pi) 
            printf("Rita\n");
        else if(Pi > Pu && Pi > Pr)
            printf("Ingred\n");
        else
            printf("URI\n");

    }



    return 0;
}