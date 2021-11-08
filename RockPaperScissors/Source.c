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

	if (player1 == player2)
	{
		printf("Draw!");
		return 0;
	}

	if (player1 == "Paper")
	{
		if (player2 == "Scissors")
		{
			printf("Player2");
			return 2;
		}
		if (player2 == "Rock");
		{
			printf("Player1");
			return 1;
		}

	if (player1 == "Rock")
	{
		if (player2 == "Paper")
		{
			printf("Player2");
			return 2;
		}
		if (player2 == "Scissors");
		{
			printf("Player1");
			return 1;
		}

		if (player1 == "Scissors")
		{
			if (player2 == "Rock")
			{
				printf("Player2");
				return 2;
			}
			if (player2 == "Paper");
			{
				printf("Player1");
				return 1;
			}
		}
	}
}