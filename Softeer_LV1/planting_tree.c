/*
 * planting_tree.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * problem name : 나무 심기
 *       status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int n;                  // Number of tree                       Range: 2 ~ 100
    int F[100];             // Goodness of land                     Range: -100 ~ 100
    int F_Multiple[4950];   // Mutiplication of Goodness of land    Range: -10000 ~ 10000
    int NUM_MULTIPLE;
    int F_Multiple_MAX = -10000;
    int i, j;               // For loop

    /**
     * Input
     */
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &F[i]);
    }


    /**
     * Logic
     */
    NUM_MULTIPLE = (n * (n-1)) / 2;

    for(i = 0; i < n-1; i++)
    {
        for(j = 1; j < n; j++)
        {
            F_Multiple[i] = F[i] * F[j];
        }
    }
    for(i = 0; i < NUM_MULTIPLE; i++)
    {
        if(F_Multiple[i] > F_Multiple_MAX)
        {
            F_Multiple_MAX = F_Multiple[i];
        }
        else
        {
            /* Do Nothing */
        }
    }

    /**
     * Output
     */
    printf("%d", F_Multiple_MAX);


    /**
     * Test code for Debugging
     */
}