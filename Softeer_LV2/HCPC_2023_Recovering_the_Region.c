/*
 * HCPC_2023_Recovering_the Region.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : [한양대 HCPC 2023] Recovering the Region
 *       Status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int N;                      // size of SUDOKU_AREA (N X N size)
    int SUDOKU_AREA[50][50];
    int i, j;                      // Used in For loop


    /**
     * Input
     */
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &SUDOKU_AREA[i][j]);
        }
    }


    /**
     * Logic
     */
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }




    /**
     * Output
     */


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < N; i++)
    // {
    //     for(j = 0; j < N; j++)
    //     {
    //         printf("%d ", SUDOKU_AREA[i][j]);
    //     }
    //     printf("\n");
    // }

}