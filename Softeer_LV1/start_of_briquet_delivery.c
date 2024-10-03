/*
 * start_of_briquet_delivery.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * problem name : 연탄 배달의 시작
 *       status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int n;                      // Number of vilage                 Range: 2 ~ 1000
    int Location_Vilage[1000];  // Location of each vilage          Range: 1 ~ 1000000
    int Distance_Between[999];  // Distance between vilage          Range: 1 ~ 999999
    int Distance_MIN = 999999;  // Minimum distance between vilage  Range: 1 ~ 999999
    int Santa_Count = 0;
    int i;                      // For loop

    /**
     * Input
     */
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &Location_Vilage[i]);
    }


    /**
     * Logic
     */
    for(i = 0; i < n-1; i++)
    {
        Distance_Between[i] = Location_Vilage[i+1] - Location_Vilage[i];
    }
    for(i = 0; i < n-1; i++)
    {
        if(Distance_Between[i] < Distance_MIN)
        {
            Distance_MIN = Distance_Between[i];
        }
    }
    for(i = 0; i < n-1; i++)
    {
        if(Distance_Between[i] == Distance_MIN)
        {
            Santa_Count += 1;
        }
    }


    /**
     * Output
     */
    printf("%d", Santa_Count);


    /**
     * Test code for Debugging
     */
}