    #include <stdio.h>

    int main (void){
        long int N, i, C, Tv = 0, Tg = 0;
        char T;

        scanf("%li", &N);

        for(i = 0; i<N; ++i){
            scanf(" %c %li", &T, &C);
            if(T == 'V')
                Tv += C;
            else if (T == 'G')
                Tg += C;
        }

        if(Tv >= Tg)
            printf("A greve vai parar.\n");
        else
            printf("NAO VAI TER CORTE, VAI TER LUTA!\n");



        return 0;
    }