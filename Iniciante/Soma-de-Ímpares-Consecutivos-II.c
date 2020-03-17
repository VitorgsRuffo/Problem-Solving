#include <stdio.h>

int main (void){
    int N, c = 1, X, Y, S, Vm, VM;

    scanf("%d", &N);

    while(1){
        if(c > N)
            break;

        S = 0;

        scanf("%d %d", &X, &Y);

        if(X > Y){
            Vm = Y;
            VM = X;
        }else{
            Vm = X;
            VM = Y;
        }

        if(VM > Vm + 2 || (VM > Vm + 1 && Vm % 2 == 0)){
            while(1){
                if(Vm % 2 == 0){
                    Vm += 1;
                    S += Vm;
                }else if (Vm % 2 == 1 || Vm % 2 == -1){
                    Vm += 2;

                    if(Vm >= VM)
                        break;
                    S += Vm;
                }

                
            }
        }
        
        printf("%d\n", S);

        ++c;
    }

    return 0;
}