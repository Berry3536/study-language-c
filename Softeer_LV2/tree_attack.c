/*
 * tree_attack.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * Problem name : 나무 공격
 *       Status : Clear
 */


#include <stdio.h>


#define THERE_IS_EMPTY  0
#define THERE_IS_HUMAN  1


int main(void)
{
    /**
     * Variable
     */
    int n;                      // Number of Rows                           Range: 5 ~ 100
    int m;                      // Number of Columns                        Range: 5 ~ 100
    int TREE_AREA[100][100];    // Area of tree                             Range: 0(is Empty space) or 1(is human)
    int ATTACK_L1;              // Most left side row of 1st tree attack    Range: 2 ~ n
    int ATTACK_R1;              // Most right side row of 1st tree attack   Range: 2 ~ n
    int ATTACK_L2;              // Most left side row of 2nd tree attack    Range: 2 ~ n
    int ATTACK_R2;              // Most right side row of 2nd tree attack   Range: 2 ~ n
    int NUM_HUMAN = 0;          // Number of human before tree attack
    int NUM_HUMAN_REMAIN = 0;   // Number of human after tree attack
    int i, j;                   // Used in For Loop

    /**
     * Input
     */
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &TREE_AREA[i][j]);
        }
    }
    scanf("%d %d", &ATTACK_L1, &ATTACK_R1);
    scanf("%d %d", &ATTACK_L2, &ATTACK_R2);


    /**
     * Logic
     *  - Count the number of human in forest
     *  - 1st tree attack
     *  - 2nd tree attack
     */
    /* Count the number of human in forest */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(TREE_AREA[i][j] == THERE_IS_HUMAN)
            {
                NUM_HUMAN += 1;
            }
            else
            {
                /* Do Nothing */
            }
        }
    }

    /* 1st tree attack */
    for(i = ATTACK_L1-1; i < ATTACK_R1; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(TREE_AREA[i][j] == THERE_IS_HUMAN)
            {
                TREE_AREA[i][j] = THERE_IS_EMPTY;
                NUM_HUMAN -= 1;
                break;  // tree attack can only remove one human at once
            }
        }
    }

    /* 2nd tree attack */
     for(i = ATTACK_L2-1; i < ATTACK_R2; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(TREE_AREA[i][j] == THERE_IS_HUMAN)
            {
                TREE_AREA[i][j] = THERE_IS_EMPTY;
                NUM_HUMAN -= 1;
                break;  // tree attack can only remove one human at once
            }
        }
    }


    /**
     * Output
     */
    printf("%d", NUM_HUMAN);    // Number of human after tree attack


    /**
     * Test code for Debugging
     */
    // printf("\n\n%d %d\n", n, m);
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < m; j++)
    //     {
    //         printf("%d ", TREE_AREA[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("%d %d\n", ATTACK_L1, ATTACK_R1);
    // printf("%d %d\n", ATTACK_L2, ATTACK_R2);

}