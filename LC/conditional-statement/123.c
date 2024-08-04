/*
    Created by: Janguk.kim
    Created on: 2024-08-04
    file name: 123.c
    status: clear
*/

#include <stdio.h>

int main(){
    int dog = 1;
    int cat = 2;
    int chick = 3;
    int num;

    printf("Number? ");
    scanf("%d", &num);

    if(num == dog){
        printf("dog");
    }
    else if(num == cat){
        printf("cat");
    }
    else if(num == chick){
        printf("chick");
    }
    else{
        printf("I don't know.");
    }

    return 0;
}