/*
    Created by:     Janguk.kim
    Created on:     2024-09-23
    file name:      comparision_of_driving_distance.c
    problem name:   주행거리 비교하기
    status:         Clear
*/

#include <stdio.h>


int main(void)
{
    int distance_A;     // A 차량의 주행거리
    int distance_B;     // B 차량의 주행거리

    /* 입력 - A, B 차랑의 주행거리 */
    scanf("%d %d", &distance_A, &distance_B);

    /* 출력 - A, B 차량의 주행거리 비교 */
    if(distance_A > distance_B)
    {
        printf("A");
    }
    else if(distance_A < distance_B)
    {
        printf("B");
    }
    else if(distance_A == distance_B)
    {
        printf("same");
    }
    else
    {
        // N/A
    }
}