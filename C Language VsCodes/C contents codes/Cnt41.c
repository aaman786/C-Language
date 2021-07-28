#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
// I used it because I want to srand function of this library to take return of pc
  
int return_me(int r)
{
    srand(time(NULL)); //It is placing a seed
    return rand() % r;
}

int greater(char char1, char char2)
{ // Return 1 if c1>c2 otherwise 0 and if c1==c2 then return -1
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else if ((char2 == 'R') && (char1 == 'S'))
    {
        return 0;
    }

    if ((char1 == 'P') && (char2 == 'R'))
    {
        return 1;
    }
    else if ((char2 == 'P') && (char1 == 'R'))
    {
        return 0;
    }

    if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else if ((char2 == 'S') && (char1 == 'P'))
    {
        return 0;
    }
}

int main()
{
    int temp;
    char player, computer;
    char dist[] = {'R', 'P', 'S'};
    int compScore = 0, playerScore = 0;
    printf("Welcome to the Game (Rock-Paper-Scissor) \n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Round %d \n\n", i + 1);
        //Taking Player 1's Input
        printf("Player 1's Turn; \n");
        printf("Choose 1 for Stone, 2 For Paper and 3 For Scissor \n");
        scanf("%d", &temp);
        getchar();
        player = dist[temp - 1];
        printf("\nYou had Choosed: %c \n\n", player);

        //Generating Computers input
        printf("Computer's Turn; \n");
        printf("Choose 1 for Stone, 2 For Paper and 3 For Scissor \n");
        temp = return_me(2) + 1;
        computer = dist[temp - 1];
        printf("\nComputer had Choosed: %c \n\n", computer);

        // comparing the Scores
        if (greater(computer, player) == 1)
        {
            compScore += 1;
            printf("Computer Got it!! \n\n");
        }
        else if (greater(computer, player) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Both Got the point, its Draw!! \n\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!! \n");
        }
    }
    printf("Player Points: %d :: \t Computer: %d \n", playerScore, compScore);

    // printf("The random number b/w 0 to 3 is: %d", return_me(2));
    if (playerScore > compScore)
    {
        printf("\nYou Win \n");
    }
    else if (playerScore < compScore)
    {
        printf("\nComputer Win \n");
    }
    else
    {
        printf("\nIts a Draw \n");
    }

    return 0;
}
