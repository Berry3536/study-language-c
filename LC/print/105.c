/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 105.c
    status: clear
*/

#include <stdio.h>

int main(){
    char seoul_num[] = "10,312,545";
    char pusan_num[] = "3,567,910";
    char incheon_num[] = "2,758,296";
    char daegu_num[] = "2,511,676";
    char gwangju_num[] = "1,454,636";

    char seoul_plus[] = "+91,375";
    char pusan_plus[] = " +5,868";
    char incheon_plus[] = " +64,888";
    char daegu_plus[] = " +17,230";
    char gwangju_plus[] = "+29,774";

    printf("%15s%15s%15s\n", "Seoul", seoul_num, seoul_plus);
    printf("%15s%15s%15s\n", "Pusan", pusan_num, pusan_plus);
    printf("%15s%15s%15s\n", "Incheon", incheon_num, incheon_plus);
    printf("%15s%15s%15s\n", "Daegu", daegu_num, daegu_plus);
    printf("%15s%15s%15s", "Gwangju", gwangju_num, gwangju_plus);

    return 0;
}