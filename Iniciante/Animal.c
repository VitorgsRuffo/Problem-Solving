#include <stdio.h>
#include <string.h>

int main (void){
    char pal[3][20], i;

    for(i = 0; i < 3; ++i)
        scanf("%s", pal[i]);
    
    if(strcmp(pal[0], "vertebrado") == 0){
        if(strcmp(pal[1], "ave") == 0){
            if(strcmp(pal[2], "carnivoro") == 0){
                printf("aguia\n");
            }else if(strcmp(pal[2], "onivoro") == 0){
                printf("pomba\n");
            }
        }else if(strcmp(pal[1], "mamifero") == 0){
            if(strcmp(pal[2], "onivoro") == 0){
                printf("homem\n");
            }else if(strcmp(pal[2], "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }else if(strcmp(pal[0], "invertebrado") == 0){
        if(strcmp(pal[1], "inseto") == 0){
            if(strcmp(pal[2], "hematofago") == 0){
                printf("pulga\n");
            }else if(strcmp(pal[2], "herbivoro") == 0){
                printf("lagarta\n");
            }
        }else if(strcmp(pal[1], "anelideo") == 0){
            if(strcmp(pal[2], "hematofago") == 0){
                printf("sanguessuga\n");
            }else if(strcmp(pal[2], "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    getch();

    return 0;
}