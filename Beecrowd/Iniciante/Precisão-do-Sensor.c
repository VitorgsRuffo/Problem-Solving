#include <stdio.h>
#include <math.h>

int main (void){
    long int H, M, QT, i;
    double X, Xm, Sum, P;

    while(scanf("%li %li", &H, &M) != EOF){
        QT = (H*60)/M;
        double vet[QT];

        Xm = 0;
        Sum = 0;

        for(i = 0; i<QT; ++i){
            scanf("%lf", &vet[i]);
            Xm += vet[i];
        }

        Xm /= (double) QT;

        for(i = 0; i<QT; ++i)
            Sum += pow(vet[i] - Xm, 2); 
        
        P = sqrt(Sum/(QT - 1));

        printf("%.5f\n", P);
    }   



    return 0;
}