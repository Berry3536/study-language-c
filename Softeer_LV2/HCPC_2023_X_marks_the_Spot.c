/*
 * HCPC_2023_X_marks_the_Spot.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : [한양대 HCPC 2023] X marks the Spot
 *       Status : On going
 */


#include <stdio.h>
#include <ctype.h>


int main(void)
{
    /**
     * Variable
     */
    int N;                      // Number of strings
    char string_S[500000][100];    // String S
    char string_T[500000][100];    // String S
    char string_OUTPUT[100];    // String output
    int X_Position[500000];        // Position of 'x' or 'X' in String S
    int i, j;                   // Used in For, While loop

    /**
     * Input
     */
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%s", string_S[i]);
        scanf("%s", string_T[i]);
    }


    /**
     * Logic
     * - get x(or X) position in string S
     * - Make string Output using x(or X) position and string T
     */
    /* get x(or X) position in string S */
    for(i = 0; i < N; i++)
    {
        j = 0;
        while(string_S[i][j] != '\0')
        {
            if((string_S[i][j] == 'x') || (string_S[i][j] == 'X'))
            {
                X_Position[i] = j; // There is only one x(or X) in string_S
            }

            j++;
        }
    }

    /* Make string Output using x(or X) position and string T */
    for(i = 0; i < N; i++)
    {
        if(isdigit(string_T[i][X_Position[i]]))
        {
            string_OUTPUT[i] = string_T[i][X_Position[i]];
        }
        else
        {
            string_OUTPUT[i] = toupper(string_T[i][X_Position[i]]);    
        }
    }
    string_OUTPUT[N] = '\0';


    /**
     * Output
     */
    printf("%s", string_OUTPUT);


    /**
     * Test code for Debugging
     */
    // for(i = 0; i < N; i++)
    // {
    //     printf("%d\n", X_Position[i]);
    // }
}