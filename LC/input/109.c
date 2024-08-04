/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 109.c
    clear: status
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int sum = 0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    sum = num1 + num2 + num3;

    printf("sum = %d", sum);

    return 0;
}