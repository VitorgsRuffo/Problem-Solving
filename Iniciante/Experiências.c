#include <stdio.h>

int main (void){
    int N, C = 0, R = 0, S = 0, T = 0, i, Q;
    double Pc, Pr, Ps;
    char bixo;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        scanf("%d %c", &Q, &bixo);
        T += Q;
        if(bixo == 'C'){
            C += Q;
        }else if(bixo == 'R'){
            R += Q;
        }else if (bixo == 'S'){
            S += Q;
        }
    }
    
    Pc = (double)(100*C)/T;
    Ps = (double)(100*S)/T;
    Pr = (double)(100*R)/T;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", T, C, R, S, Pc, Pr, Ps);


    getch();

    return 0;
}