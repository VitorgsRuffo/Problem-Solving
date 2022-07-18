#include <stdio.h>


double sum(int N){

    double result;

    if(N <= 1){
        if(N == 1)
            return (double) 1/2;
        else
            return 0;
    }else{
        result = 1/(2 + sum(N-1));
    }

    return result;

}


int main (void){
    int N;
    double Sum;

    scanf("%d", &N);

    Sum = 1 + sum(N);

    printf("%.10f\n", Sum);

    getch();

    return 0;
}