#include <stdio.h>

int main (void){
    long C, G; 
    int c = 0;

    scanf("%li %li", &C, &G);

    c = C / G;




    if(c >= 10){
        printf("A UFSC fecha dia %d de outubro.\n", c - 9);
    }else{
        printf("A UFSC fecha dia %d de setembro.\n", c + 21);
    }

    getch();

    return 0;
}