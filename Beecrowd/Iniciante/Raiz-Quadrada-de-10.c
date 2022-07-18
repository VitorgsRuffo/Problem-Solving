#include <stdio.h>


double sum(int N){

    double result;

    if(N <= 1){
        if(N == 1)
            return (double) 1/6;
        else
            return 0;
    }else{
        result = 1/(6 + sum(N-1));
    }

    return result;

}


int main (void){
    int N;
    double Sum;

    scanf("%d", &N);

    Sum = 3 + sum(N);

    printf("%.10f\n", Sum);

    getch();

    return 0;
}