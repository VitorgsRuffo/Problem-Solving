#include <stdio.h>
#include <string.h>

int main (void){
    int N, S, P, i, j;

    while(1){
        scanf("%d", &N);

        if(N == 0)
            break;
        
        char sub_ex[N], test[N];
        int sub_time[N];
        char sub_res[N][10];
        
        for(i = 0; i<N; ++i) 
            test[i] = '0';

        S = 0;
        P = 0; j = 0;

        for(i = 0; i<N; ++i){
            scanf(" %c %d %s", &sub_ex[i], &sub_time[i], sub_res[i]);

            

            if(strcmp(sub_res[i], "correct") == 0){
                P += sub_time[i]; 
                ++S;
            }else if(strcmp(sub_res[i], "incorrect") == 0){
                test[j] = sub_ex[i];
                ++j;
            }

        }

     

        for(i = 0; i<N; ++i){
            if(strcmp(sub_res[i], "correct") == 0){
                for(j = 0; j<N; ++j){
                    if(sub_ex[i] == test[j]){
                        P += 20;
                    }
                }

                
            }
        }

        printf("%d %d\n", S, P);

    }

    return 0;
}