#include <stdio.h>

int main (void){
    int N, i, Dir;

    while(1){
        scanf("%d", &N);
        if(N == 0)
            break;
        Dir = 1;
        char comandos[N];

        for(i = 0; i<N; ++i){
            scanf(" %c", &comandos[i]);
            switch(Dir){
                case 1:
                    if(comandos[i] == 'E'){
                        Dir = 4;
                    }else if(comandos[i] == 'D'){
                        Dir = 3;
                    }
                    break;
                case 2:
                    if(comandos[i] == 'E'){
                        Dir = 3;
                    }else if(comandos[i] == 'D'){
                        Dir = 4;
                    }
                    break;
                case 3:
                    if(comandos[i] == 'E'){
                        Dir = 1;
                    }else if(comandos[i] == 'D'){
                        Dir = 2;
                    }
                    break;
                case 4:
                    if(comandos[i] == 'E'){
                        Dir = 2;
                    }else if(comandos[i] == 'D'){
                        Dir = 1;
                    }
                    break;
            }
        }

        switch(Dir){
            case 1:
                printf("N\n");  
                break;
            case 2:
                printf("S\n");
                break;
            case 3:
                printf("L\n");
                break;
            case 4:
                printf("O\n");
                break;
        }
    }




    return 0;
}