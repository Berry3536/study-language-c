/*
    Created by: Janguk.kim
    Created on: 2024-08-02
    file name: 116.c
    status: clear
*/

#include <stdio.h>

int main(){
    int score1;
    int score2;
    int score3;
    double avg;

    scanf("%d %d %d", &score1, &score2, &score3);

    avg = (double)(score1 + score2 + score3) / 3;
    
    printf("%0.1f", avg);

    return 0;
}