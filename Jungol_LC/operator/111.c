/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 111.c
    status: clear
*/

#include <stdio.h>

int main(){
    int score1;
    int score2;
    int score3;
    int score4;
    int sum;
    int avg;

    scanf("%d %d %d %d", &score1, &score2, &score3, &score4);

    sum = score1 + score2 + score3 + score4;
    avg = sum / 4;

    printf("sum %d\n", sum);
    printf("avg %d", avg);

    return 0;
}