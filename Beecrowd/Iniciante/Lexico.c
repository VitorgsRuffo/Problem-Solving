#include <stdio.h>
#include <string.h>

int main (void){
    char A[100], B[100];
    int i = 0;

    scanf(" %s %s", A, B);
    
    if(A[i] < B[i]){
        printf("%s\n%s\n", A, B);
        return 0;
    }else if(A[i] > B[i]){
        printf("%s\n%s\n", B, A);
        return 0;
    }else if(A[i] == B[i]){
        while(1){   
            ++i;
            if(A[i] == '\0' || B[i] == '\0')
                break;
            
            if(A[i] < B[i]){
                printf("%s\n%s\n", A, B);
                return 0;
            }else if(A[i] > B[i]){
                printf("%s\n%s\n", B, A);
                return 0;
            }

        }

        if(strlen(A) <= strlen(B))
            printf("%s\n%s\n", A, B);
        else
            printf("%s\n%s\n", B, A);

        
    }    

    setbuf(stdin, NULL);
    getch();


    return 0;
}