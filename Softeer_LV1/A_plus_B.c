/*
    Created by:     Janguk.kim
    Created on:     2024-09-23
    file name:      A_plus_B.c
    problem name:   A+B
    status:         Clear
*/

#include <stdio.h>


int main(void)
{
    int T;          // 테스트 케이스의 개수
    int A[100];     // 정수 A
    int B[100];     // 정수 B
    int SUM_of_A_B[100];     // 정수 A와 B의 합

    /* 입력 - 테스트 케이스의 개수 */
    scanf("%d", &T);

    /* 입력 - 정수 A, B */
    for(int i=0; i<T; i++)
    {
        scanf("%d %d", &A[i], &B[i]);
        SUM_of_A_B[i] = A[i] + B[i];
    }

    /* 출력 - 정수 A와 B의 합 */
    for(int i=0; i<T; i++)
    {
        printf("Case #%d: %d\n", i+1, SUM_of_A_B[i]);
    }

}