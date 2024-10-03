/*
 * automated_map_construction.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * Problem name : 지도 자동 구축
 *       Status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int n;              // Number of interation                     Range: 1 ~ 15
    int NUM_SIDE = 1;   // Number of side (one side of rectangle)
    int NUM_DOT;        // Total number of dot
    int i;              // Used in For loop


    /**
     * Input
     */
    scanf("%d", &n);


    /**
     * Logic
     */
    for(i = 0; i < n; i++)
    {
        NUM_SIDE *= 2;
    }
    NUM_DOT = (NUM_SIDE + 1) * (NUM_SIDE + 1);


    /**
     * Output
     */
    printf("%d", NUM_DOT);


    /**
     * Test code for Debugging
     */
    // printf("%d", NUM_SIDE);
}