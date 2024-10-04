/*
 * virus.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : 바이러스
 *       Status : Clear
 */


#include <stdio.h>
#include <math.h>


int main(void)
{
    /**
     * Variable
     */
    unsigned long long  NUM_Virus_Initial;      // Number of virus at initial state         Range: 1 ~ 100000000 (10^8)
    unsigned long long  NUM_Virus_Final_ANS;        // Number of virus at final state           Range: 1 ~ 100000000 (10^8)
    unsigned long long  Rate_Increase;          // Rate of increaing virus                  Range: 1 ~ 100000000 (10^8)
    unsigned long long  Time;                   // Total time for increasing virus          Range: 1 ~ 1000000   (10^6)     Unit: sec
    int i;                      // Used in For loop


    /**
     * Input
     */
    scanf("%lld %lld %lld", &NUM_Virus_Initial, &Rate_Increase, &Time);


    /**
     * Logic
     */
    if(Time == 0)
    {
        NUM_Virus_Final_ANS = NUM_Virus_Initial;
    }
    else    // Time > 0
    {
        NUM_Virus_Final_ANS = NUM_Virus_Initial;
        for(i = 0; i < Time; i++)
        {
            NUM_Virus_Final_ANS = (NUM_Virus_Final_ANS * Rate_Increase) % 1000000007;
        }
    }


    /**
     * Output
     */
    printf("%lld\n", NUM_Virus_Final_ANS);

    /**
     * Test code for Debugging
     */
    // printf("%d %d %d", NUM_Virus_initial, Rate_Increase, Time);
}