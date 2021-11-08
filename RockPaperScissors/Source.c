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
		return 30;
	}

	if (player1 == player2)
	{
		printf("Draw!");
		return 0;
	}
}