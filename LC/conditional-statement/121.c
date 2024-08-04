/*
    Created by: Janguk.kim
    Created on: 2024-08-04
    file name: 121.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num > 0){
        printf("plus");
    }
    else if (num < 0){
        printf("minus");
    }
    else{ // num == 0
        printf("zero");
    }

    return 0;
}