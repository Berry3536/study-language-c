/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 114.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);

    printf("%d %d\n", ++num1, num2--);
    printf("%d %d", num1, num2);

    return 0;
}