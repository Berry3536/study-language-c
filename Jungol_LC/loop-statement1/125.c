/*
    Created by: Janguk.kim
    Created on: 2024-08-04
    file name: 125.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num;
    int i;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        if(i == num -1){
            printf("%d", i+1);
        }
        else{
            printf("%d ", i+1);
        }
    }

    return 0;  
}