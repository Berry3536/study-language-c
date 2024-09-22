/*
    Created by: Janguk.kim
    Created on: 2024-08-05
    file name: 127.c
    status: clear
*/

#include <stdio.h>

int main(){
    int num = 0;
    int num_cnt = 0;
    int sum = 0;
    double avg;

    while((num >= 0)&&(num <= 100)){
        scanf("%d", &num);
        
        if((num >= 0)&&(num <= 100)){
            sum += num;
            num_cnt += 1;
        }
    }
    avg = (double)sum / num_cnt;

    printf("sum : %d\n", sum);
    printf("avg : %0.1lf", avg);
    
    return 0;
}