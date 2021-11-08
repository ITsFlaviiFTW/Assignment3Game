#include <stdio.h>
#include <string.h>
#include "rps.h"


void main()
{

}

int RockPaperScissors(char player1[], char player2[])
{
	// created some limitations for player1 and player2 that will output as "Not Valid" if they exceed the limitation
	if ((player1 == "Paper") > 0 || (player2 == "Paper") > 0 || (player1 == "Rock") > 0 || (player2 == "Rock") > 0 || (player1 == "Scissors") > 0 || (player2 == "Scissors") > 0)
	{
		printf("Not Valid!");
		return 3;
	}
	
	//if both players have the same pick
	//for example, player1 choosing rock as well as player2 choosing rock (as shown in the test unit), it will come to a draw
	if (strcmp(player1, player2) == 0)
	{
		printf("Draw!");
		return 5;
	}
	//================================== Player 1 chooses paper, player2 chooses scissors resulting in player2 to win, when player 2 chooses rock, results in player 1 winning

	if (strcmp(player1, "Paper") == 0)
	{
		if (strcmp(player2, "Scissors") == 0)
		{
			printf("Player2 wins");
			return 2;
		}
		if (strcmp(player2, "Rock") == 0)
		{
			printf("Player1 wins");
			return 1;
		}
		//================================== Player 1 chooses rock, player2 chooses paper resulting in player2 to win, when player 2 chooses scissors, results in player 1 winning
	}


	if (strcmp(player1, "Rock") == 0)
	{
		if (strcmp(player2, "Paper") == 0)
		{
			printf("Player2 wins");
			return 2;
		}
		if (strcmp(player2, "Scissors") == 0)
		{
			printf("Player1 wins");
			return 1;
		}
	}

	//================================== Player 1 chooses scissors, player2 chooses rock resulting in player2 to win, when player 2 chooses paper, results in player 1 winning

	if (strcmp(player1, "Scissors") == 0)
	{
		if (strcmp(player2, "Rock") == 0)
		{
			printf("Player2 wins");
			return 2;
		}
		if (strcmp(player2, "Paper") == 0)
		{
			printf("Player1 wins");
			return 1;
		}

		// when player1 wins, it will always return with code 1; when player2 wins, it will always return with code 2;
	}
}
