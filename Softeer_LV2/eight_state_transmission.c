/*
    Created by:     Janguk.kim
    Created on:     2024-09-23
    file name:      eight_state_transmission.c
    problem name:   8단 변속기
    status:         Clear
*/

#include <stdio.h>


int main(void)
{
    int Stage_Transmission[8];

    /* Input Variables */
    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &Stage_Transmission[i]);
    }

    /* Judge transmission order */
    if(Stage_Transmission[0] == 1 && Stage_Transmission[1] == 2  && Stage_Transmission[2] == 3 && Stage_Transmission[3] == 4 && Stage_Transmission[4] == 5 && Stage_Transmission[5] == 6 && Stage_Transmission[6] == 7 && Stage_Transmission[7] == 8)
    {
        printf("ascending");
    }
    else if(Stage_Transmission[0] == 8 && Stage_Transmission[1] == 7  && Stage_Transmission[2] == 6 && Stage_Transmission[3] == 5 && Stage_Transmission[4] == 4 && Stage_Transmission[5] == 3 && Stage_Transmission[6] == 2 && Stage_Transmission[7] == 1)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }

    /* Test Code for Debugging*/
    // for(int i = 0; i < 8; i++)
    // {
    //     printf("%d ", Stage_Transmission[i]);
    // }
}