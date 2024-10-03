/*
 * dangerous_hyodo.c
 * 
 *   Created on : 2024-10-03
 *       Author : Janguk.Kim
 * problem name : 위험한 효도
 *       status : Clear
 */


#include <stdio.h>

int Time_First_Stage_Of_Game(int a, int b, int d);
int Time_Second_Stage_Of_Game(int a, int b, int d);

int main(void)
{
    /**
     * Variable Definition
     */
    int a;             // Game timing                                 Range: 1 ~ 1000
    int b;             // Game timing                                 Range: 1 ~ 1000
    int d;             // Distance between two people                 Range: 1 ~ 100000
    int Time_Total;    // Total Time during playing this game 

    /**
     * Variable Input
     * Input variable a, b, d from user
     */
    scanf("%d %d %d", &a, &b, &d);

    /**
     * Logic
     * Calculate Minimum time for excuting game
     */
    Time_Total += Time_First_Stage_Of_Game(a, b, d);
    Time_Total += Time_Second_Stage_Of_Game(a, b, d);

    /**
     * Ouput
     * Minimum time for executing game
     * */
    printf("%d", Time_Total);
}

/**
 * @brief Time_First_Stage_of_Game
 * @details Calculate Executing time during First stage of game - Touch the Hunter
 * @param in a
 * @param in b
 * @param in d
 * @return int Executing time during First stage of game
 */
int Time_First_Stage_Of_Game(int a, int b, int d)
{
    int Time_Execute_Game = 0;  // Executing time during playing game
    int Distance_Remain;        // Distance Remaining between two people

    Distance_Remain = d;
    while(Distance_Remain > 0)
    {
        if(Distance_Remain < a)
        {
            Time_Execute_Game += Distance_Remain;
            Distance_Remain = 0;
            
            return Time_Execute_Game;
        }
        else
        {
            /* Do Nothing */
        }

        Distance_Remain -= a;
        Time_Execute_Game += a;

        if(Distance_Remain > 0)
        {
            Time_Execute_Game += b;    
        }
        else
        {
            /* Do Nothing */
        }
    } /* while(Distance_Remain > 0) */
}


/**
 * @brief Time_Second_Stage_of_Game
 * @details Calculate Executing time during Second stage of game - Touch the Hunter
 * @param in a
 * @param in b
 * @param in d
 * @return int Executing time during Second stage of game
 */
int Time_Second_Stage_Of_Game(int a, int b, int d)
{
    int Time_Execute_Game = 0;  // Executing time during playing game
    int Distance_Remain;        // Distance Remaining between two people

    Distance_Remain = d;
    while(Distance_Remain > 0)
    {
        if(Distance_Remain < b)
        {
            Time_Execute_Game += Distance_Remain;
            Distance_Remain = 0;
            
            return Time_Execute_Game;
        }
        else
        {
            /* Do Nothing */
        }
        
        Distance_Remain -= b;
        Time_Execute_Game += b;

        if(Distance_Remain > 0)
        {
            Time_Execute_Game += a;    
        }
        else
        {
            /* Do Nothing */
        }
    } /* while(Distance_Remain > 0) */
}