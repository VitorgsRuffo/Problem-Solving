#include <stdio.h>

int main (void){
    int N, i;
    char Op, jog1, jog2;
    long I, D, E, F, X;

    scanf("%li %d", &I, &N);
    D = I; E = I; F = I;

    for(i = 0; i<N; ++i){
        scanf(" %c", &Op);

        if(Op == 'C'){
            scanf(" %c %li", &jog1, &X);
            if(jog1 == 'D'){
                D -= X;
            }else if(jog1 == 'E'){
                E -= X;
            }else if(jog1 == 'F'){
                F -= X;
            }
        }else if(Op == 'V'){
            scanf(" %c %li", &jog1, &X);
            if(jog1 == 'D'){
                D += X;
            }else if(jog1 == 'E'){
                E += X;
            }else if(jog1 == 'F'){
                F += X;
            }
        }else if(Op == 'A'){
            scanf(" %c %c %li", &jog1, &jog2, &X);

            switch(jog1){
                case 'D':
                    D += X;
                    if(jog2 == 'E'){
                        E -= X;
                    }else if(jog2 == 'F'){
                        F -= X;
                    }
                    break;
                case 'E':
                    E += X;
                    if(jog2 == 'D'){
                        D -= X;
                    }else if(jog2 == 'F'){
                        F -= X;
                    }
                    break;
                case 'F':
                     F += X;
                    if(jog2 == 'E'){
                        E -= X;
                    }else if(jog2 == 'D'){
                        D -= X;
                    }
                    break;
            }
            
        }
    }

    printf("%li %li %li\n", D, E, F);

    getch();

    return 0;
}