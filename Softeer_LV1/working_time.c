/*
 * working_time.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * problem name : 근무 시간
 *       status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int Hour_IN[5];        // Start Hour of Working for Monday ~ Friday       Range: 00 ~ 23
    int Hour_OUT[5];       // End Hour of Working for Monday ~ Friday         Range: 00 ~ 23
    int Minute_IN[5];      // Start Minute of Working for Monday ~ Friday     Range: 00 ~ 59
    int Minute_OUT[5];     // End Minute of Working for Monday ~ Friday       Range: 00 ~ 59
    int Hour_WORK[5];      // Working Hour for Monday ~ Friday
    int Minute_WORK[5];    // Working Minute for Monday ~ Friday
    int Minute_TOTAL_WORK; // Total working time for Monday ~ Friday
    int i;                 // For loop


    /**
     * Input
     */
    for(i = 0; i < 5; i++)
    {
        scanf("%d:%d %d:%d", &Hour_IN[i], &Minute_IN[i], &Hour_OUT[i], &Minute_OUT[i]);
    }


    /**
     * Logic
     */
    for(i = 0; i < 5; i++)
    {
        Hour_WORK[i] = Hour_OUT[i] - Hour_IN[i];
        Minute_WORK[i] = Minute_OUT[i] - Minute_IN[i];
    }
    for(i = 0; i < 5; i++)
    {
        Minute_TOTAL_WORK += (Minute_WORK[i] + Hour_WORK[i] * 60);
    }


    /**
     * Output
     */
    printf("%d", Minute_TOTAL_WORK);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < 5; i++)
    // {
    //     printf("%d:%d %d:%d\n", Hour_IN[i], Minute_IN[i], Hour_OUT[i], Minute_OUT[i]);
    // }
}