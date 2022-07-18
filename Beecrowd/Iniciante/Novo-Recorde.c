#include <stdio.h>

int main (void){
    int N, i;
    double vm, Mvm;

    while(scanf("%d", &N) != EOF){
        int Dist[N];
        double Temp[N];

        Mvm = 0;

        for(i=0; i<N; ++i){

            scanf("%lf %d", &Temp[i], &Dist[i]);
            Temp[i] /= 60;

            vm = Dist[i]/Temp[i];
            if(vm > Mvm){
                Mvm = vm;
                printf("%d\n", i+1);
            }
        }





    }



    return 0;
}