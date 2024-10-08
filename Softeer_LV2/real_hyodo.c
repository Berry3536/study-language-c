/*
 * real_hyodo.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * Problem name : 진정한 효도
 *       Status : On going
 */


#include <stdio.h>
#include <stdlib.h>


#define LENGTH_LAND_ROW      3    // Length of land in row      (Land: 3 x 3 size)
#define LENGTH_LAND_COLUMN   3    // Length of land in column   (Land: 3 x 3 size)


int main(void)
{
    /**
     * Variable
     */
    int Height_Land[3][3];        // Height of land                              Range: 1 ~ 3
    int Height_Diff_COLUMN[3][2] = {0, };
    int Height_Diff_ROW[3][2] = {0, };
    int Man_Power_COLUMN = 0;            // Man power for working in 1x1 size land
    int Man_Power_COLUM_MIN = 3;        // Minimum Man power for working in 1x1 size land
    int Man_Power_ROW = 0;            // Man power for working in 1x1 size land
    int Man_Power_ROW_MIN = 3;        // Minimum Man power for working in 1x1 size land
    int Man_Power_RESULT = 0;        // Minimum Man power for working in 1x1 size land
    int i,j;                      // Used in For loop


    /**
     * Input
     */
    for(i = 0; i < LENGTH_LAND_ROW; i++)
    {
        for(j = 0; j < LENGTH_LAND_COLUMN; j++)
        {
            scanf("%d", &Height_Land[i][j]);
        }
    }


    /**
     * Logic
     */
    for(i = 0; i < LENGTH_LAND_ROW; i++)
    {
        Man_Power_COLUMN = 0;
        for(j = 0; j < LENGTH_LAND_COLUMN-1; j++)
        {
            if(Height_Land[i][j] - Height_Land[i][j+1] != 0)
            {
                Height_Diff_COLUMN[i][j] = abs(Height_Land[i][j] - Height_Land[i][j+1]);
            }
        }

        if(Height_Diff_COLUMN[i][0] == 2 &&  Height_Diff_COLUMN[i][1] == 2)
        {
            Man_Power_COLUMN = 2;
        }
        else if(Height_Diff_COLUMN[i][0] == 1 &&  Height_Diff_COLUMN[i][1] == 1)
        {
            if(Height_Land[i][0] == Height_Land[i][2])
            {
                Man_Power_COLUMN = 2;
            }
            else
            {
                Man_Power_COLUMN = 3;
            }
        }
        else if(Height_Diff_COLUMN[i][0] == 0 &&  Height_Diff_COLUMN[i][1] == 0)
        {
            Man_Power_COLUMN = 0;
        }
        else    // Height_Diff_COLUMN[i][0] != Height_Diff_COLUMN[i][1]
        {
            Man_Power_COLUMN = Height_Diff_COLUMN[i][0] + Height_Diff_COLUMN[i][1];
        }

        if(Man_Power_COLUMN < Man_Power_COLUM_MIN)
        {
            Man_Power_COLUM_MIN = Man_Power_COLUMN;
        }
        else
        {
            /* Do Nothing */
        }
    }

    for(i = 0; i < LENGTH_LAND_COLUMN; i++)
    {
        Man_Power_ROW = 0;
        for(j = 0; j < LENGTH_LAND_ROW-1; j++)
        {
            if(Height_Land[j][i] - Height_Land[j+1][i] != 0)
            {
                Height_Diff_ROW[i][j] = abs(Height_Land[j][i] - Height_Land[j+1][i]);
            }
        }

        if(Height_Diff_ROW[i][0] == 2 &&  Height_Diff_ROW[i][1] == 2)
        {
            Man_Power_ROW = 2;
        }
        else if(Height_Diff_ROW[i][0] == 1 &&  Height_Diff_ROW[i][1] == 1)
        {
            if(Height_Land[i][0] == Height_Land[i][2])
            {
                Man_Power_ROW = 2;
            }
            else
            {
                Man_Power_ROW = 3;
            }
        }
        else if(Height_Diff_ROW[i][0] == 0 &&  Height_Diff_ROW[i][1] == 0)
        {
            Man_Power_ROW = 0;
        }
        else    // Height_Diff_COLUMN[i][0] != Height_Diff_COLUMN[i][1]
        {
            Man_Power_ROW = Height_Diff_ROW[i][0] + Height_Diff_ROW[i][1];
        }

        if(Man_Power_ROW < Man_Power_ROW_MIN)
        {
            Man_Power_ROW_MIN = Man_Power_ROW;
        }
        else
        {
            /* Do Nothing */
        }
    }

    if(Man_Power_COLUM_MIN < Man_Power_ROW_MIN)
    {
        Man_Power_RESULT = Man_Power_COLUM_MIN;
    }
    else
    {
        Man_Power_RESULT = Man_Power_ROW_MIN;
    }


    /**
     * Output
     */
    printf("%d", Man_Power_RESULT);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < LENGTH_LAND_ROW; i++)
    // {
    //     for(j = 0; j < LENGTH_LAND_COLUMN; j++)
    //     {
    //         printf("%d ", Height_Land[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\n\nMan_Power_COLUM_MIN: %d", Man_Power_COLUM_MIN);
    // printf("\nMan_Power_ROW_MIN: %d\n\n", Man_Power_ROW_MIN);

    // for(i = 0; i < 3; i++)
    // {
    //     for(j = 0; j < 2; j++)
    //     {
    //         printf("Height Diff Column[%d][%d]: %d\n ", i, j, Height_Diff_COLUMN[i][j]);    
    //     }
    // }
    // for(i = 0; i < 3; i++)
    // {
    //     for(j = 0; j < 2; j++)
    //     {
    //         printf("Height Diff Row[%d][%d]: %d\n ", i, j, Height_Diff_ROW[i][j]);    
    //     }
    // }
}