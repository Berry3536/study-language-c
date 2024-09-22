/*
    Created by: Janguk.kim
    Created on: 2024-08-01
    file name: 113.c
    status: clear
*/

#include <stdio.h>

int main(){
    int width;
    int length;
    int area;

    scanf("%d %d", &width, &length);

    width += 5;
    length *= 2;
    area = width * length;

    printf("width = %d\n", width);
    printf("length = %d\n", length);
    printf("area = %d", area);

    return 0;
}