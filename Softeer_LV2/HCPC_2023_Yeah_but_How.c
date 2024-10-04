/*
 * HCPC_2023_Yeah_but_How.c
 * 
 *   Created on : 2024-10-04
 *       Author : Janguk.Kim
 * Problem name : [한양대 HCPC 2023] Yeah, but How?
 *       Status : Clear
 */


#include <stdio.h>
#include <string.h>


int main(void)
{
    /**
     * Variable
     */
    char STRING_S[200000];
    char STRING_T[200000];
    int i, j = 0;                       // Used in For loop     i: index for STRING_S       j: index for STRING_T


    /**
     * Input
     */
    scanf("%s", STRING_S);


    /**
     * Logic
     */
    while(STRING_S[i] != '\0')
    {
        if((STRING_S[i] == '(') && (STRING_S[i+1] == ')'))
        {
            STRING_T[j] = '(';
            STRING_T[j+1] = '1';
            j += 1;
        }
        else if((STRING_S[i] == ')') && (STRING_S[i+1] == '('))
        {
            STRING_T[j] = ')';
            STRING_T[j+1] = '+';
            j += 1;
        }
        else
        {
            STRING_T[j] = STRING_S[i];
        }
        i++;
        j++;
    }


    /**
     * Output
     */
    printf("%s", STRING_T);

    /**
     * Test code for Debugging
     */
    // printf("%s", STRING_S);
    // printf("%ld", strlen(STRING_S));
    // printf("\n\n%c", STRING_S[2]);
}