#include <stdio.h>
#include <string.h>

int main (void){
    int N, i, j, t1, t2, T1 ,T2;

    scanf("%d", &N);

    for(i = 0; i<N; ++i){
        char st1[51], st2[51];

        scanf(" %s %s", st1, st2);

        t1 = strlen(st1);
        t2 = strlen(st2);

        T1 = 0; T2 = 0;

        if(t2 > t1)
            t1 = t2;

        for(j = 0; j<t1+1; ++j){
            if(st1[j] == '\0')
                ++T1;
            if(!T1)
                printf("%c", st1[j]);


            if(st2[j] == '\0')
                ++T2;
            if(!T2)
                printf("%c", st2[j]);
        }

        printf("\n");
    }



    return 0;
}