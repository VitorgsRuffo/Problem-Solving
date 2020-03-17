#include <stdio.h>

int main (void){
    double M, t;
    int hr, min, seg, aux;

    while(scanf("%lf", &M) != EOF){

        if(M >=0 && M<90){
            t = 21600;
            t += M*240;

            hr = t/3600;
            t -= hr*3600;
            min = t/60;
            t -= min*60;
            seg = t;

            printf("Bom Dia!!\n");

            if(hr < 10)
                printf("0%d:", hr);
            else
                printf("%d:", hr);

            if(min < 10)
                printf("0%d:", min);
            else
                printf("%d:", min);

            if(seg < 10)
                printf("0%d\n", seg);
            else
                printf("%d\n", seg);
            

            

        }else if(M == 360){

            printf("Bom Dia!!\n");
            printf("06:00:00\n");

        }else if(M>=90 && M<180){

            t = 21600;
            t += M*240;

            hr = t/3600;
            t -= hr*3600;
            min = t/60;
            t -= min*60;
            seg = t;

            
            printf("Boa Tarde!!\n");

            if(hr < 10)
                printf("0%d:", hr);
            else
                printf("%d:", hr);

            if(min < 10)
                printf("0%d:", min);
            else
                printf("%d:", min);

            if(seg < 10)
                printf("0%d\n", seg);
            else
                printf("%d\n", seg);
            
        }else if(M>=180 && M<270){
            t = 21600;
            t += M*240;

            hr = t/3600;
            t -= hr*3600;
            min = t/60;
            t -= min*60;
            seg = t;

            
            printf("Boa Noite!!\n");

            if(hr < 10)
                printf("0%d:", hr);
            else
                printf("%d:", hr);

            if(min < 10)
                printf("0%d:", min);
            else
                printf("%d:", min);

            if(seg < 10)
                printf("0%d\n", seg);
            else
                printf("%d\n", seg);
            
        }else if(M>=270 && M<360){
            t = 0;

            t += (M-270)*240;

            hr = t/3600;
            t -= hr*3600;
            min = t/60;
            t -= min*60;
            seg = t;

            
            printf("De Madrugada!!\n");

            if(hr < 10)
                printf("0%d:", hr);
            else
                printf("%d:", hr);

            if(min < 10)
                printf("0%d:", min);
            else
                printf("%d:", min);

            if(seg < 10)
                printf("0%d\n", seg);
            else
                printf("%d\n", seg);
            
        }

    }


    return 0;
}