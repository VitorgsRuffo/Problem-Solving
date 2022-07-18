#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){
    char A[6], B[6], op, Rs[10];
    int i, a, b;
    long R;

    scanf(" %s %c %s", A, &op, B);

    for(i = 0; i<6; ++i){
        if(A[i] == '\0')
            break;
        
        if(A[i] == '7')
            A[i] = '0';
        
       
    }

    a = strtol(A, NULL, 10);

    for(i = 0; i<6; ++i){
        if(B[i] == '\0')
            break;
        
        if(B[i] == '7')
            B[i] = '0';
    }

    b = strtol(B, NULL, 10);

    if(op == '+'){
        R = a + b;

    }else if(op == 'x'){    
        R = a * b;
    }
    
    //itoa(R, Rs, 10);
    sprintf(Rs, "%li", R);

    for(i = 0; i<10; ++i){
        if(Rs[i] == '\0')
            break;
        
        if(Rs[i] == '7'){
            Rs[i] = '0';
        }
    }

    R = strtol(Rs, NULL, 10);

    printf("%li\n", R);

    getch();



    return 0;
}