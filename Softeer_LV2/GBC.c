/*
 * GBC.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : GBC
 *       Status : On going
 */


#include <stdio.h>

#define HEIGHT_GBC  100     // Unit: meter


int main(void)
{
    /**
     * Variable
     */
    int N;  // Recommended Operation Cases      Range: 1 ~ 100
    int M;  // Real Operation Cases             Range: 1 ~ 100
    int Length_Recommend[100];
    int Speed_Recommend[100];
    int Length_Real[100];
    int Speed_Real[100];
    int Speed_Current_Real[100];
    int Speed_Current_Recommended[100];
    int Location_Current_Real = 0;
    int Location_Current_Recommended = 0;
    int Current_Position = 0;
    int Speed_Diff = 0;
    int Speed_Diff_MAX = -1;

    int i, j;  // Used in For loop

    /**
     * Input
     */
    scanf("%d %d", &N, &M);
    for(i = 0; i < N; i++)
    {
        scanf("%d %d", &Length_Recommend[i], &Speed_Recommend[i]);
    }
    for(i = 0; i < M; i++)
    {
        scanf("%d %d", &Length_Real[i], &Speed_Real[i]);
    }


    /**
     * Logic
     */
    for(i = 0; i < N; i++)
    {
        for(j = Current_Position; j < Length_Recommend[i]+Current_Position; j++)
        {
            Speed_Current_Recommended[j] = Speed_Recommend[i];
        }
        Current_Position += Length_Recommend[i];
    }

    Current_Position = 0;
    for(i = 0; i < M; i++)
    {
        for(j = Current_Position; j < Length_Real[i]+Current_Position; j++)
        {
            Speed_Current_Real[j] = Speed_Real[i];
        }
        Current_Position += Length_Real[i];
    }

    for(i = 0; i < HEIGHT_GBC; i++)
    {
        /* Exceed Recommend Speed */
        if(Speed_Current_Real[i] > Speed_Current_Recommended[i])
        {
            Speed_Diff = Speed_Current_Real[i] - Speed_Current_Recommended[i];
        }
        /* Same with Recommened Speed */
        else if(Speed_Current_Real[i] == Speed_Current_Recommended[i])
        {
            Speed_Diff = 0;
        }
        /* Lower than Recommened Speed */
        else
        {
            continue;
        }

        /* Get maximum speed difference(exceed speed) */
        if(Speed_Diff > Speed_Diff_MAX)
        {
            Speed_Diff_MAX = Speed_Diff;
        }
        else
        {
            /* Do Nothing */
        }
    }
    

    /**
     * Output
     */
    printf("%d", Speed_Diff_MAX);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < N; i++)
    // {
    //     printf("%d %d\n", Length_Recommend[i], Speed_Recommend[i]);
    // }
    // for(i = 0; i < M; i++)
    // {
    //     printf("%d %d\n", Length_Real[i], Speed_Real[i]);
    // }

    // for(i = 0; i < 100; i++)
    // {
    //     printf("Location: %d Speed Real: %d, Speed Recommend: %d\n", i+1, Speed_Current_Real[i], Speed_Current_Recommended[i]);
    // }
}