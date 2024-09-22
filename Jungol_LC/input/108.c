/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 108.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num1;
    double num2;
    int result;
    
    num1 = 50;
    num2 = 100.12;
    result = num1 * num2;

    printf("%0.2f * %d = %d", num2, num1, result);

    return 0;
}