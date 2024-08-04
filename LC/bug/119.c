/*
    Created by: Janguk.kim
    Created on: 2024-08-02
    file name: 119.c
    status: ongoing
*/

#include <stdio.h>
#include <time.h>

int main(){
    int a = 0;
    time_t now;
    struct tm tt;
    time(&now);
    tt = *localtime(&now);
    a = tt.tm_year;
    a += tt.tm_mon;
    a += tt.tm_mday;
    printf("%d %d %d\n", 1, 2, 3);
    return 0;
}