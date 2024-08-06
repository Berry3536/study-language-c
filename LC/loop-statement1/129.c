/*
    Created by: Janguk.kim
    Created on: 2024-08-05
    file name: 129.c
    status: clear
*/

#include <stdio.h>

int main(){
    int base = 0;
    int height = 0;
    double width = 0;
    char cont;

    while(1){
        printf("Base = ");
        scanf("%d", &base);

        printf("Height = ");
        scanf("%d", &height);

        width = (double)(base * height)/2;

        printf("Triangle width = %.1lf", width);

        printf("\nContinue? ");
        scanf(" %c", &cont);

        if((cont == 'Y')&&(cont == 'y')){
        }
        else{
            break;
        }

    }
    
    return 0;
}