/*
 * safecracker.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : 금고 털이
 *       Status : Clear
 */


#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b);


typedef struct
{
    int Weight;                     // Weight of jewelry                Range: 1 ~ 10000        Unit: kg
    int Price;                      // Price of jewelry per 1 weight    Range: 1 ~ 10000        Unit: KRW/kg
}stJEWERLY;


int main(void)
{
    /**
     * Variable
     */
    int Weight_Bag;                 // Weight of Bag                    Range: 1 ~ 10000
    int Weight_Bag_Current = 0;     // Weight of Bag right now          Range: 1 ~ 10000
    int Price_MAX = 0;              // Maximum price of safecracker
    int N;                          // Number of jewelry                Range: 1 ~ 1000000
    stJEWERLY   jewerly[1000000];   // structure for jewelry
    int i;                          // Used in For loop

    /**
     * Input
     */
    scanf("%d %d", &Weight_Bag, &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d %d", &jewerly[i].Weight, &jewerly[i].Price);
    }


    /**
     * Logic
     */
    qsort(jewerly, N, sizeof(stJEWERLY), compare);

    for(i = 0; i < N; i++)
    {
        if(Weight_Bag_Current < Weight_Bag)
        {
            if(jewerly[i].Weight < Weight_Bag - Weight_Bag_Current)
            {
                Weight_Bag_Current += jewerly[i].Weight;
                Price_MAX += jewerly[i].Weight * jewerly[i].Price;
            }
            else    // jewerly[i].Weight > Weight_Bag - Weight_Bag_Current
            {
                Price_MAX += (Weight_Bag - Weight_Bag_Current) * jewerly[i].Price;
                Weight_Bag_Current = Weight_Bag;
            }
        }
    }
    


    /**
     * Output
     */
    printf("%d", Price_MAX);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < N; i++)
    // {
    //     printf("%d %d\n", jewerly[i].Weight, jewerly[i].Price);
    // }


}

/**
 * @brief compare
 * @details compare function for useing qsort()
 */
int compare(const void* a, const void* b)
{
    stJEWERLY *tmpa = (stJEWERLY *)a;
    stJEWERLY *tmpb = (stJEWERLY *)b;

    return (tmpb->Price - tmpa->Price);
}