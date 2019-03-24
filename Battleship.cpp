#include <iostream>
#include <string>
#include <time.h>
using namespace std;

void displayBattle(char grid[10][10]);
void displayBattle(char grid[10][10])
{
	system("cls");

	cout << "  | A  B  C  D  E  F  G  H  I  J" << endl;
	cout << "--|-----------------------------" << endl;
	cout << "1 | " << grid[0][0] << "  " << grid[0][1] << "  " << grid[0][2] << "  " << grid[0][3] << "  " << grid[0][4] << "  " << grid[0][5] << "  " << grid[0][6] << "  " << grid[0][7] << "  " << grid[0][8] << "  " << grid[0][9] << endl;
	cout << "2 | " << grid[1][0] << "  " << grid[1][1] << "  " << grid[1][2] << "  " << grid[1][3] << "  " << grid[1][4] << "  " << grid[1][5] << "  " << grid[1][6] << "  " << grid[1][7] << "  " << grid[1][8] << "  " << grid[1][9] << endl;
	cout << "3 | " << grid[2][0] << "  " << grid[2][1] << "  " << grid[2][2] << "  " << grid[2][3] << "  " << grid[2][4] << "  " << grid[2][5] << "  " << grid[2][6] << "  " << grid[2][7] << "  " << grid[2][8] << "  " << grid[2][9] << endl;
	cout << "4 | " << grid[3][0] << "  " << grid[3][1] << "  " << grid[3][2] << "  " << grid[3][3] << "  " << grid[3][4] << "  " << grid[3][5] << "  " << grid[3][6] << "  " << grid[3][7] << "  " << grid[3][8] << "  " << grid[3][9] << endl;
	cout << "5 | " << grid[4][0] << "  " << grid[4][1] << "  " << grid[4][2] << "  " << grid[4][3] << "  " << grid[4][4] << "  " << grid[4][5] << "  " << grid[4][6] << "  " << grid[4][7] << "  " << grid[4][8] << "  " << grid[4][9] << endl;
	cout << "6 | " << grid[5][0] << "  " << grid[5][1] << "  " << grid[5][2] << "  " << grid[5][3] << "  " << grid[5][4] << "  " << grid[5][5] << "  " << grid[5][6] << "  " << grid[5][7] << "  " << grid[5][8] << "  " << grid[5][9] << endl;
	cout << "7 | " << grid[6][0] << "  " << grid[6][1] << "  " << grid[6][2] << "  " << grid[6][3] << "  " << grid[6][4] << "  " << grid[6][5] << "  " << grid[6][6] << "  " << grid[6][7] << "  " << grid[6][8] << "  " << grid[6][9] << endl;
	cout << "8 | " << grid[7][0] << "  " << grid[7][1] << "  " << grid[7][2] << "  " << grid[7][3] << "  " << grid[7][4] << "  " << grid[7][5] << "  " << grid[7][6] << "  " << grid[7][7] << "  " << grid[7][8] << "  " << grid[7][9] << endl;
	cout << "9 | " << grid[8][0] << "  " << grid[8][1] << "  " << grid[8][2] << "  " << grid[8][3] << "  " << grid[8][4] << "  " << grid[8][5] << "  " << grid[8][6] << "  " << grid[8][7] << "  " << grid[8][8] << "  " << grid[8][9] << endl;
	cout << "10| " << grid[9][0] << "  " << grid[9][1] << "  " << grid[9][2] << "  " << grid[9][3] << "  " << grid[9][4] << "  " << grid[9][5] << "  " << grid[9][6] << "  " << grid[9][7] << "  " << grid[9][8] << "  " << grid[9][9] << endl;
	
}

int main()
{
	//Variables and Instantiation
	srand(time(NULL));
	bool shipPlacement[10][10];

	char displayGrid[10][10];

	char colCoord;

	int safeSpot = 0,
		rowCoord,
		colCoordInt,
		shipsHit = 0;

	bool battleWon = false,
		 hitOrMiss = false;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			shipPlacement[i][j] = false;
			displayGrid[i][j] = '.';
		}
	}

	string randomDoNothingString;


	//placing large ship 5
	int startRow = rand() % 6,
		startCol= rand() % 6,
		hOv = rand();

	if (hOv == 1)
	{
		for (int i = 0; i < 5; i++)
			shipPlacement[startRow][startCol + i] = true;
	}
	else
	{
		for (int i = 0; i < 5; i++)
			shipPlacement[startRow + i][startCol] = true;
	}

	//placing not as large as large ship but larger than all the other ships ship 4
	while (safeSpot < 4)
	{
		startRow = rand() % 7;
		startCol = rand() % 7;
		hOv = rand();
		safeSpot = 0;

		if (hOv == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				if (shipPlacement[startRow][startCol + i])
					break;
				else
					safeSpot++;
			}
		}
		else
		{
			for (int i = 0; i < 5; i++)
				if (shipPlacement[startRow + i][startCol])
					break;
				else
					safeSpot++;
		}
	}
	if (hOv == 1)
	{
		for (int i = 0; i < 4; i++)
		{
			shipPlacement[startRow][startCol + i] = true;
		}
	}
	else
	{
		for (int i = 0; i < 4; i++)
			shipPlacement[startRow + i][startCol] = true;
	}
	safeSpot = 0;

	//placing medium ship 3
	while (safeSpot < 3)
	{
		startRow = rand() % 8;
		startCol = rand() % 8;
		hOv = rand();
		safeSpot = 0;

		if (hOv == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				if (shipPlacement[startRow][startCol + i])
					break;
				else
					safeSpot++;
			}
		}
		else
		{
			for (int i = 0; i < 3; i++)
				if (shipPlacement[startRow + i][startCol])
					break;
				else
					safeSpot++;
		}
	}
	if (hOv == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			shipPlacement[startRow][startCol + i] = true;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
			shipPlacement[startRow + i][startCol] = true;
	}
	safeSpot = 0;

	//placing medium ship 3
	while (safeSpot < 3)
	{
		startRow = rand() % 8;
		startCol = rand() % 8;
		hOv = rand();
		safeSpot = 0;

		if (hOv == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				if (shipPlacement[startRow][startCol + i])
					break;
				else
					safeSpot++;
			}
		}
		else
		{
			for (int i = 0; i < 3; i++)
				if (shipPlacement[startRow + i][startCol])
					break;
				else
					safeSpot++;
		}
	}
	if (hOv == 1)
	{
		for (int i = 0; i < 3; i++)
		{
			shipPlacement[startRow][startCol + i] = true;
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
			shipPlacement[startRow + i][startCol] = true;
	}
	safeSpot = 0;

	//placing smol ship 2
	while (safeSpot < 2)
	{
		startRow = rand() % 9;
		startCol = rand() % 9;
		hOv = rand();
		safeSpot = 0;

		if (hOv == 1)
		{
			for (int i = 0; i < 2; i++)
			{
				if (shipPlacement[startRow][startCol + i])
					break;
				else
					safeSpot++;
			}
		}
		else
		{
			for (int i = 0; i < 2; i++)
				if (shipPlacement[startRow + i][startCol])
					break;
				else
					safeSpot++;
		}
	}
	if (hOv == 1)
	{
		for (int i = 0; i < 2; i++)
		{
			shipPlacement[startRow][startCol + i] = true;
		}
	}
	else
	{
		for (int i = 0; i < 2; i++)
			shipPlacement[startRow + i][startCol] = true;
	}
	safeSpot = 0;


	//GAMEPLAY
	cout << "__________         __    __  .__           _________.__    .__        " << endl;
	cout << "\\______   \\_____ _/  |__/  |_|  |   ____  /   _____/|  |__ |__|_____  " << endl;
	cout << " |    |  _/\\__  \\   __\\   __\\  | _/ __  \\ \\_____  \\ |  |  \\|  \\____ \\ " << endl;
	cout << " |    |   \\ / __ \\|  |  |  | |  |_\\  ___/ /        \\|   Y  \  |  |_> >" << endl;
	cout << " |______  /(____  /__|  |__| |____/\\___  >_______  /|___|  /__|   __/ " << endl;
	cout << "        \\/      \\/                     \\/        \\/      \\/   |__|    " << endl << endl;
	cout << "The computer has placed their ships; You have 30 tries to guess their positions." << endl;
	cout << "Do you accept the challenge, General?" << endl;

	cin >> randomDoNothingString;

	for (int i = 30; i > 0; i--)
	{
		displayBattle(displayGrid);
		if (i == 30)
			cout << "This is your first guess. You have " << i - 1 << " guesses left" << endl;
		else if (i == 1)
		{
			if (hitOrMiss)
				cout << "It's a hit!" << endl;
			else
				cout << "Nothing but water; we missed." << endl;
			cout << "This is your last guess..." << endl;
		}
		else
		{
			if (hitOrMiss)
				cout << "It's a hit!" << endl;
			else
				cout << "Nothing but water; we missed." << endl;
			cout << "You have " << i - 1 << " guesses left" << endl;
		}

		cout << "Enter the row coordinate: ";
		cin >> rowCoord;
		cout << endl << "Enter the column coordinate: ";
		cin >> colCoord;

		switch (colCoord)
		{
		case 'A':
			colCoordInt = 1;
			break;
		case 'a':
			colCoordInt = 1;
			break;
		case 'B':
			colCoordInt = 2;
			break;
		case 'b':
			colCoordInt = 2;
			break;
		case 'C':
			colCoordInt = 3;
			break;
		case 'c':
			colCoordInt = 3;
			break;
		case 'D':
			colCoordInt = 4;
			break;
		case 'd':
			colCoordInt = 4;
			break;
		case 'E':
			colCoordInt = 5;
			break;
		case 'e':
			colCoordInt = 5;
			break;
		case 'F':
			colCoordInt = 6;
			break;
		case 'f':
			colCoordInt = 6;
			break;
		case 'G':
			colCoordInt = 7;
			break;
		case 'g':
			colCoordInt = 7;
			break;
		case 'H':
			colCoordInt = 8;
			break;
		case 'h':
			colCoordInt = 8;
			break;
		case 'I':
			colCoordInt = 9;
			break;
		case 'i':
			colCoordInt = 9;
			break;
		case 'J':
			colCoordInt = 10;
			break;
		case 'j':
			colCoordInt = 10;
			break;
		}

		if (shipPlacement[rowCoord - 1][colCoordInt - 1])
		{
			displayGrid[rowCoord - 1][colCoordInt - 1] = 'X';
			hitOrMiss = true;
			shipsHit++;
		}
		else
		{if (hitOrMiss)
				cout << "It's a hit!" << endl;
			else
				cout << "Nothing but water; we missed." << endl;
			displayGrid[rowCoord - 1][colCoordInt - 1] = 'M';
			hitOrMiss = false;
		}

		if (shipsHit == 17)
		{
			battleWon = true;
			break;
		}
	}
	displayBattle(displayGrid);
	if (battleWon)
		cout << "Congratulations General! We have won the battle!" << endl;
	else
		cout << "Good try General, but the battle has been lost" << endl;

	cout << "Thanks for playing!" << endl;
}