/*
    Created by: Janguk.kim
    Created on: 2024-08-04
    file name: 122.c
    status: clear
*/

#include <stdio.h>

int main(){
    int year;

    scanf("%d", &year);

    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("leap year");
    }
    else{
        printf("common year");
    }

    return 0;
}