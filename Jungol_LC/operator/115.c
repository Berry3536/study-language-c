/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 115.c
    status: clear
*/

#include <stdio.h>

int main(){
    int minsu_height;
    int minsu_weight;
    int kiyoung_height;
    int kiyoung_weight;
    int relational_operator;

    scanf("%d %d", &minsu_height, &minsu_weight);
    scanf("%d %d", &kiyoung_height, &kiyoung_weight);

    relational_operator = ((minsu_height > kiyoung_height) && (minsu_weight > kiyoung_weight));

    if(relational_operator){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }

    return 0;
}