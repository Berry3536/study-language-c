/*
    Created by: Janguk.kim
    Created on: 2024-08-02
    file name: 117.c
    status: clear
*/

#include <stdio.h>

int main(){
    double score1;
    double score2;
    double score3;
    int sum;
    int avg;

    scanf("%lf %lf %lf", &score1, &score2, &score3);

    sum = (int)score1 + (int)score2 + (int)score3;
    avg = (int)(score1 + score2 + score3)/3;

    printf("sum %d\n", sum);
    printf("avg %d", avg);

    return 0;
}