/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 112.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    int quotient;
    int remainder;

    scanf("%d %d", &num1, &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("%d / %d = %d...%d", num1, num2, quotient, remainder);

    return 0;
}