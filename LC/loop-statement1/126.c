/*
    Created by: Janguk.kim
    Created on: 2024-08-04
    file name: 126.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num = -1;
    int odd_cnt = 0;
    int even_cnt = 0;

    while(num != 0){
        scanf("%d", &num);

        if(num == 0){
            continue;
        }
        else if(num % 2 == 0){
            even_cnt += 1;
        }
        else if(num % 2 == 1){
            odd_cnt += 1;
        }
    }

    printf("odd : %d\n", odd_cnt);
    printf("even : %d", even_cnt);
}