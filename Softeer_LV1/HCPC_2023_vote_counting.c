/*
    Created by:     Janguk.kim
    Created on:     2024-09-23
    file name:      HCPC_2023_vote_counting.c
    problem name:   [한양대 HCPC 2023] 개표
    status:         Clear
*/

#include <stdio.h>

int main(void)
{
    int T;  // 후보의 수
    int n;  // 각 후보가 받은 표의 수
    int NUM_VOTE[100];
    int Five_Count[100] = {0, };
    int Single_Count[100] = {0, };

    /* 입력 - 후보의 수 */
    scanf("%d", &T);    

    /* 입력 - 각 부호가 받은 표의 수 */
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        NUM_VOTE[i] = n;
    }
    
    for(int i = 0; i < T; i++)
    {
        Five_Count[i] = NUM_VOTE[i] / 5;
        Single_Count[i] = NUM_VOTE[i] % 5;
    }

    for(int i = 0; i < T; i++)
    {
        for(int j = 0; j < Five_Count[i]; j++)
        {
            printf("++++ ");
        }
        for(int j = 0; j < Single_Count[i]; j++)
        {
            printf("|");
        }
        printf("\n");
    }

    /* 변수 디버깅 용도 print */
    // for(int i = 0; i < T; i++)
    // {
    //     printf("%d\n", Five_Count[i]);
    // }
    // printf("\n");
    // for(int i = 0; i < T; i++)
    // {
    //     printf("%d\n", Single_Count[i]);
    // }

    return 0;
}