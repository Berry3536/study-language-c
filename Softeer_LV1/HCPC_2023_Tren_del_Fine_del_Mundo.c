/*
 * HCPC_2023_Tren_del_Fine_del_Mundo.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * problem name : [한양대 HCPC 2023] Tren del Fine del Mundo
 *       status : Clear
 */


#include <stdio.h>


int main(void)
{
    /**
     * Variable
     */
    int n;                          // Number of Station                     Range: 1 ~ 1000
    int Location_X[1000];           // X Location of Station                 Range: -1000 ~ 1000
    int Location_Y[1000];           // Y Location of Station                 Range: -1000 ~ 1000
    int Location_Y_MIN = 1000;      // Minimum value of Y location           Range: -1000 ~ 1000
    int Location_Y_MIN_index = 0;   // index of Minimum value of Y location  Range: 1 ~ 1000
    int i;                          // For loop


    /**
     * Input
     */
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &Location_X[i], &Location_Y[i]);
    }


    /**
     * Logic
     */
    for(i = 0; i < n; i++)
    {
        if(Location_Y[i] < Location_Y_MIN)
        {
            Location_Y_MIN = Location_Y[i];
            Location_Y_MIN_index = i;
        }
    }


    /**
     * Output
     */
    printf("%d %d", Location_X[Location_Y_MIN_index], Location_Y[Location_Y_MIN_index]);


    /**
     * Test code for Debugging
     */


}