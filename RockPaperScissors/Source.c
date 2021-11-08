#include <stdio.h>
#include <string.h>
#include "rps.h"


void main()
{

}

int RockPaperScissors(char player1[], char player2[])
{
	if ((player1 == "Paper") > 0 || (player2 == "Paper") > 0 || (player1 == "Rock") > 0 || (player2 == "Rock") > 0 || (player1 == "Scissors") > 0 || (player2 == "Scissors") > 0)
	{
		printf("Not Valid!");
		return 3;
	}

	if (strcmp(player1, player2) == 0)
	{
		printf("Draw!");
		return 5;
	}
	//==================================

	if (strcmp(player1, "Paper") == 0)
	{
		if (strcmp(player2, "Scissors") == 0)
		{
			printf("Player2 wins");
			return 2;
		}
		if (strcmp(player2, "Rock") == 0);
		{
			printf("Player1 wins");
			return 1;
		}
		//==================================
	}


	if (strcmp(player1, "Rock") == 0)
	{
		if (strcmp(player2, "Paper") == 0)
		{
			printf("Player2 wins");
			return 2;
		}
		if (strcmp(player2, "Scissors") == 0);
		{
			printf("Player1 wins");
			return 1;
		}
	}

	//==================================

	if (player1 == "Scissors")
	{
		if (player2 == "Rock")
		{
			printf("Player2 wins");
			return 1;
		}
		if (player2 == "Paper");
		{
			printf("Player1 wins");
			return 2;
		}
	}
}
