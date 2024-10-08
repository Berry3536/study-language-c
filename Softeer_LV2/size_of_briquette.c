/*
 * size_of_briquette.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : 연탄의 크기
 *       Status : Clear
 */


#include <stdio.h>


#define MAX_RADIUS  100  // Maximum radius of heater in house


int main(void)
{
    /**
     * Variable
     */
    int n;                   // Number of house                 Range: 1 ~ 100
    int Radius[100];         // Radius of heater in house       Range: 2 ~ 100
    int cnt_house = 0;       // Number of house that can use briqette
    int cnt_house_MAX = 0;   // Maximum Number of house that can use briqette
    int i, j;                // Used in For loop


    /**
     * Input
     */
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &Radius[i]);
    }


    /**
     * Logic
     */
    for(j = 2; j < MAX_RADIUS; j++)     // j: available radius of briqette (2 ~ 100)
    {
        cnt_house = 0;
        for(i = 0; i < n; i++)
        {
            if(Radius[i] % j == 0)
            {
                cnt_house += 1;
            }
            else
            {
                /* Do Nothing */
            }
        }
        
        if(cnt_house > cnt_house_MAX)
        {
            cnt_house_MAX = cnt_house;
        }
        else
        {
            /* Do Nothing */
        }
    }


    /**
     * Output
     */
    printf("%d", cnt_house_MAX);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < n; i++)
    // {
    //     printf("%d ", Radius[i]);
    // }
}