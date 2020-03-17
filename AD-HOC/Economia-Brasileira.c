#include <stdio.h>

int main (void){
    int Q, c = 0, i;

    scanf("%d", &Q);

    int people[Q];

    for(i = 0; i<Q; ++i){
        scanf("%d", &people[i]);
        if(people[i] == 0)
            ++c;
    }

    if(c > Q/2)
        printf("Y\n");
    else
        printf("N\n");


    return 0;
}