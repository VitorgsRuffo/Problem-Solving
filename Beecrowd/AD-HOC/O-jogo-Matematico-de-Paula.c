#include <stdio.h>

int main (void){
    int N, i;

    scanf("%d", &N);

    int A, B, R;
    char C;

    for(i = 0; i<N; ++i){
        scanf("%d %c %d", &A, &C, &B);
        if(A == B){
            R = A * B;
            printf("%d\n", R);
        }else{
            if(C >= 65 && C <=90){
                R = B - A;
                printf("%d\n", R);
            }else{
                R = B + A;
                printf("%d\n", R);
            }
        }
    }




    return 0;
}