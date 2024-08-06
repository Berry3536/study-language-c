/*
    Created by: Janguk.kim
    Created on: 2024-08-05
    file name: 128.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num;
    int cnt = 0;

    while(1){
        scanf("%d",&num);
        if(num == 0)break;

        if((num % 3 != 0)&&(num % 5 != 0)){
            cnt += 1;
        }
    }
    printf("%d", cnt);
    
    return 0;
}