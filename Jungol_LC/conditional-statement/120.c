/*
    Created by: Janguk.kim
    Created on: 2024-08-02
    file name: 120.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    int result;

    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2){
        result = num1 - num2;
    }
    else if(num1 < num2){
        result = num2 - num1;
    }
    
    printf("%d", result);

    return 0;
}