/*
 * secret_menu.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : 비밀 메뉴
 *       Status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int M;  // Range: 1 ~ 100
    int N;  // Range: 1 ~ 100
    int K;  // Range: 1 ~ 9
    int Secret_Code[101] = {0, };
    int Menu_Order[101] = {0, };
    int Mask_index = 0;
    int Count_Same = 0;
    int Flag_Secert = 0;
    int i, j;  // Used in For loop


    /**
     * Input
     */
    scanf("%d %d %d", &M, &N, &K);
    for(i = 0; i < M; i++)
    {
        scanf("%d", &Secret_Code[i]);
    }
    for(i = 0; i < N; i++)
    {
        scanf("%d", &Menu_Order[i]);
    }


    /**
     * Logic
     */
    for(i = 0; i < N; i++)
    {
        Mask_index = 0;
        Count_Same = 0;
        for(j = i; j < M+i; j++)
        {
            if(Menu_Order[j] == Secret_Code[Mask_index++])
            {
                Count_Same++;
            }
        }
        if(Count_Same == M)
        {
            Flag_Secert = 1;
            break;
        }
    }

    /**
     * Output
     */
    if(Flag_Secert == 1)
    {
        printf("secret");
    }
    else
    {
        printf("normal");
    }
    

    /**
     * Test code for Debugging
     */
    // for(i = 0; i < M; i++)
    // {
    //     printf("%d ", Secret_Code[i]);
    // }

    // printf("\n\n%d", Flag_Secert);

    // printf("\n");
    // for(i = 0; i < M; i++)
    // {
    //     printf("%d ", Flag_Same_Code[i]);
    // }
}