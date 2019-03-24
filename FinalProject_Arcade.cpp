#include <iostream>
#include <string>
#include <time.h>
#include <cmath>
#include <stdlib.h>
using namespace std;


//////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//////////////////////////////////////////METHODS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

void displayHangman(int hit);
void displayHangman(int hit)
{
	system("cls");
	switch (hit)
	{
	case 0:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 1:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                             " << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 2:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                            |" << endl;
		cout << "|                            |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 3:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                          \\|" << endl;
		cout << "|                            |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 4:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                          \\|/" << endl;
		cout << "|                            |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 5:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                          \\|/" << endl;
		cout << "|                            |" << endl;
		cout << "|                           /" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	case 6:
		cout << "_______________________________" << endl;
		cout << "| /                       \\ |" << endl;
		cout << "|/                         \\|" << endl;
		cout << "|" << endl;
		cout << "|                            O" << endl;
		cout << "|                          \\|/" << endl;
		cout << "|                            |" << endl;
		cout << "|                           / \\" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|_______________________________" << endl;
		break;
	}
}

void playHangman();
void playHangman()
{
	int hits = 0,
		gameMode;
	bool win = true,
		inWord = false;

	string easyWords[7] = { "sofia", "stitch", "memes", "trash", "pacman", "minecraft", "pi" },
		mediumWords[7] = { "id tech", "hippopatamus", "princeton", "wery wow", "parentheses", "bees?", "shia surprise" },
		hardWord[7] = { "cats in hats", "birds with arms", "snakes in hats", "here come dat boi", "just do it", "donald trump's hair", "time is an illusion" },
		extremeWords[3] = { "supercalifragilisticexpialidocious", "hippopotamonstraphobia", "when i was a young boy my father took me into the city to see a marching band" };

	//GAMEPLAY
	cout << "Welcome to..." << endl;
	cout << "  _  _                                 " << endl;
	cout << " | || |__ _ _ _  __ _ _ __  __ _ _ _  " << endl;
	cout << " | __ / _` | ' \\/ _` | '  \\/ _` |  ' \\ " << endl;
	cout << " |_||_\\__,_|_||_\\__, |_|_|_\\__,_|_||_|" << endl;
	cout << "                |___/                  " << endl;
	cout << "1) Easy" << endl;
	cout << "2) Medium" << endl;
	cout << "3) Hard" << endl;
	cout << "4) Extreme" << endl;
	cin >> gameMode;

	string word;
	if (gameMode == 4)
	{
		int index = rand() % 7;
		string word = easyWords[index],
			fullGuess = "";

		char theirGuess;
		int l = word.length();
		char guesses[100];
		for (int i = 0; i < l; i++)
			guesses[i] = '-';

		while (hits < 6)
		{
			system("cls");
			displayHangman(hits);
			for (int i = 0; i < l; i++)
				cout << guesses[i];
			cout << endl << "Guess a letter: ";
			cin >> theirGuess;
			cout << endl;
			inWord = false;
			win = true;

			for (int i = 0; i < l; i++)
			{
				if (theirGuess == word[i])
				{
					guesses[i] = theirGuess;
					inWord = true;
				}

				if (guesses[i] == '-')
					win = false;
			}
			if (!inWord) hits++;
			if (win)
			{
				cout << "Congrats!!! You have won! The word was: " << word << endl;
				break;
			}


		}
		if (!win)
			cout << "You Lost!!! The word was: " << word << endl;
	}
	else if (gameMode == 3)
	{
		int index = rand() % 7;
		string word = mediumWords[index],
			fullGuess = "";

		char theirGuess;
		int l = word.length();
		char guesses[100];
		for (int i = 0; i < l; i++)
			guesses[i] = '-';

		while (hits < 6)
		{
			system("cls");
			displayHangman(hits);
			for (int i = 0; i < l; i++)
				cout << guesses[i];
			cout << endl << "Guess a letter: ";
			cin >> theirGuess;
			cout << endl;
			inWord = false;
			win = true;

			for (int i = 0; i < l; i++)
			{
				if (theirGuess == word[i])
				{
					guesses[i] = theirGuess;
					inWord = true;
				}

				if (guesses[i] == '-')
					win = false;

			}
			if (!inWord) hits++;
			if (win)
			{
				cout << "Congrats!!! You have won! The word was: " << word << endl;
				break;
			}


		}
		if (!win)
			cout << "You Lost!!! The word was: " << word << endl;
	}
	else if (gameMode == 2)
	{
		int index = rand() % 7;
		string word = hardWord[index],
			fullGuess = "";

		char theirGuess;
		int l = word.length();
		char guesses[100];
		for (int i = 0; i < l; i++)
			guesses[i] = '-';

		while (hits < 6)
		{
			system("cls");
			displayHangman(hits);
			for (int i = 0; i < l; i++)
				cout << guesses[i];
			cout << endl << "Guess a letter: ";
			cin >> theirGuess;
			cout << endl;
			inWord = false;
			win = true;

			for (int i = 0; i < l; i++)
			{
				if (theirGuess == word[i])
				{
					guesses[i] = theirGuess;
					inWord = true;
				}
				if (guesses[i] == '-')
					win = false;

			}
			if (!inWord) hits++;
			if (win)
			{
				cout << "Congrats!!! You have won! The word was: " << word << endl;
				break;
			}


		}
		if (!win)
			cout << "You Lost!!! The word was: " << word << endl;
	}
	else if (gameMode == 1)
	{
		int index = rand() % 7;
		string word = extremeWords[index],
			fullGuess = "";

		char theirGuess;
		int l = word.length();
		char guesses[100];
		for (int i = 0; i < l; i++)
			guesses[i] = '-';

		while (hits < 6)
		{
			system("cls");
			displayHangman(hits);
			for (int i = 0; i < l; i++)
				cout << guesses[i];
			cout << endl << "Guess a letter: ";
			cin >> theirGuess;
			cout << endl;
			inWord = false;
			win = true;

			for (int i = 0; i < l; i++)
			{
				if (theirGuess == word[i])
				{
					guesses[i] = theirGuess;
					inWord = true;
				}

				if (guesses[i] == '-')
					win = false;

			}
			if (!inWord) hits++;

			if (win)
			{
				cout << "Congrats!!! You have won! The word was: " << word << endl;
				break;
			}


		}
		if (!win)
			cout << "You Lost!!! The word was: " << word << endl;
	}

	cout << "Thanks for playing!" << endl;
}

void displayTTT(int game[3][3]);
void displayTTT(int game[3][3])
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j] == 1)
				temp[i][j] = 'X';
			else if (game[i][j] == 0)
				temp[i][j] = '-';
			else
				temp[i][j] = 'O';
		}
	}

	cout << "  1  2  3" << endl;
	cout << "1  " << temp[0][0] << "|" << temp[0][1] << "|" << temp[0][2] << endl;
	cout << "  -------" << endl;
	cout << "2  " << temp[1][0] << "|" << temp[1][1] << "|" << temp[1][2] << endl;
	cout << "  -------" << endl;
	cout << "3  " << temp[2][0] << "|" << temp[2][1] << "|" << temp[2][2] << endl;

}
int checkWin(int game[3][3]);
int checkWin(int game[3][3])
{
	//check cols
	if ((game[0][0] + game[0][1] + game[0][2]) == 3)
		return 1;
	else if ((game[0][0] + game[0][1] + game[0][2]) == -3)
		return -1;
	else if ((game[1][0] + game[1][1] + game[1][2]) == 3)
		return 1;
	else if ((game[1][0] + game[1][1] + game[1][2]) == -3)
		return -1;
	else if ((game[2][0] + game[2][1] + game[2][2]) == 3)
		return 1;
	else if ((game[2][0] + game[2][1] + game[2][2]) == -3)
		return -1;

	//check rows
	if ((game[0][0] + game[1][0] + game[2][0]) == 3)
		return 1;
	else if ((game[0][0] + game[1][0] + game[2][0]) == -3)
		return -1;
	else if ((game[0][1] + game[1][1] + game[2][1]) == 3)
		return 1;
	else if ((game[0][1] + game[1][1] + game[2][1]) == -3)
		return -1;
	else if ((game[0][2] + game[1][2] + game[2][2]) == 3)
		return 1;
	else if ((game[0][2] + game[1][2] + game[2][2]) == -3)
		return -1;

	//check diag
	if ((game[2][0] + game[1][1] + game[0][2]) == 3)
		return 1;
	else if ((game[2][0] + game[1][1] + game[0][2]) == -3)
		return -1;

	return 0;
}

void playTTT();
void playTTT()
{
	//VARIABLES AND INITIALIZATION
	int board[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = 0;
		}
	}

	int colCoord,
		rowCoord,
		win = 0,
		gameMode,
		moves = 0;


	//START GAME
	cout << "Welcome to ..." << endl;
	cout << " _______  ___   _______    _______  _______  _______    _______  _______  _______ " << endl;
	cout << "|       ||   | |       |  |       ||   _   ||       |  |       ||       ||       |" << endl;
	cout << "|_     _||   | |       |  |_     _||  |_|  ||       |  |_     _||   _   ||    ___|" << endl;
	cout << "  |   |  |   | |       |    |   |  |       ||       |    |   |  |  | |  ||   |___ " << endl;
	cout << "  |   |  |   | |      _|    |   |  |       ||      _|    |   |  |  |_|  ||    ___|" << endl;
	cout << "  |   |  |   | |     |_     |   |  |   _   ||     |_     |   |  |       ||   |___ " << endl;
	cout << "  |___|  |___| |_______|    |___|  |__| |__||_______|    |___|  |_______||_______|" << endl;
	cout << endl;
	cout << endl;
	cout << "1) Player V Player" << endl;
	cout << "2) Player V Computer" << endl;
	cin >> gameMode;
	system("cls");

	if (gameMode == 1)
	{
		moves = 0;

		while (win == 0)
		{
			system("cls");
			displayTTT(board);
			cout << "Player 1, enter a column coord: ";
			cin >> colCoord;
			cout << "Player 1, enter a row coord: ";
			cin >> rowCoord;
			board[rowCoord - 1][colCoord - 1] = 1;
			moves++;
			win = checkWin(board);
			if (win != 0) break;
			if (moves == 9) break;

			system("cls");
			displayTTT(board);
			cout << "Player 2, enter a column coord: ";
			cin >> colCoord;
			cout << "Player 2, enter a row coord: ";
			cin >> rowCoord;
			board[rowCoord - 1][colCoord - 1] = -1;
			moves++;
			win = checkWin(board);
			if (win != 0) break;
		}
	}
	else if (gameMode == 2)
	{
		moves = 0;

		while (win == 0)
		{
			system("cls");
			displayTTT(board);
			cout << "Player, enter a column coord: ";
			cin >> colCoord;
			cout << "Player, enter a row coord: ";
			cin >> rowCoord;
			board[rowCoord - 1][colCoord - 1] = 1;
			moves++;
			win = checkWin(board);
			if (win != 0) break;
			if (moves == 9) break;

			colCoord = rand() % 3;
			rowCoord = rand() % 3;

			while (board[rowCoord][colCoord] != 0)
			{
				colCoord = rand() % 3;
				rowCoord = rand() % 3;
			}
			board[rowCoord][colCoord] = -1;
			moves++;
			win = checkWin(board);
			if (win != 0) break;
		}
	}
	system("cls");
	displayTTT(board);
	if (win == 1)
		if (gameMode == 1)
			cout << "Player 1 Wins!!!" << endl;
		else
			cout << "Congrats!! You Win!!!" << endl;
	else if (win == -1)
		if (gameMode == 1)
			cout << "Player 2 Wins!!!" << endl;
		else
			cout << "Good try, but the computer wins!!" << endl;
	else
		cout << "It's a tie!" << endl;
	cout << "Thanks for playing! Come again!" << endl;
}

void playNumber();
void playNumber()
{
	//VARIABLES
	int minNum,
		maxNum,
		range,
		cpuNum,
		guessNum,
		gameMode;

	string userResponse;
	bool lost = false;

	//GAMEPLAY
	system("cls");
	cout << "Are you ready to play..." << endl;
	cout << "  _   _                 _                  ____                      " << endl;
	cout << " | \\ | |_   _ _ __ ___ | |__   ___ _ __   / ___| __ _ _ __ ___   ___ " << endl;
	cout << " |  \\| | | | | '_ ` _ \\| '_ \\ / _ \\ '__| | |  _ / _` | '_ ` _ \\ / _ \\ " << endl;
	cout << " | |\\  | |_| | | | | | | |_) |  __/ |    | |_| | (_| | | | | | |  __/" << endl;
	cout << " |_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|     \\____|\\__,_|_| |_| |_|\\___| " << endl;
	cout << "                                                                     " << endl;
	cout << "1) The computer guesses your number" << endl;
	cout << "2) You guess the computer's number" << endl;
	cin >> gameMode;
	if (gameMode == 1)
	{
		cout << "You're going to think of a number in a range you choose from. Can the computer guess it in 10 guesses?" << endl;
		cout << "Enter the MINIMUM number in your range: ";
		cin >> minNum;
		cout << endl;
		cout << "Enter the MAXIMUM number in your range: ";
		cin >> maxNum;
		cout << endl;
		system("cls");

		cout << "Respond to the computer with commands HIGH, LOW, or YES" << endl;

		for (int i = 0; i < 10; i++)
		{
			range = (int)abs(maxNum - minNum);
			cpuNum = rand() % range + minNum;

			cout << "Is your number " << cpuNum << "?" << endl;
			cin >> userResponse;

			if (userResponse == "HIGH")
				minNum = cpuNum;
			else if (userResponse == "LOW")
				maxNum = cpuNum;
			else
			{
				lost = true;
				break;
			}
		}
		if (lost)
			cout << "The computer guessed your number!" << endl;
		else
			cout << "The computer could not guess your number!" << endl;

		cout << "Thanks for playing!" << endl;
	}
	else
	{
		cout << "The computer is going to think of a number in a range you choose from. Can you guess it in 10 guesses?" << endl;
		cout << "Enter the MINIMUM number the computer can choose from: ";
		cin >> minNum;
		cout << endl;
		cout << "Enter the MAXIMUM number the computer can choose from: ";
		cin >> maxNum;
		cout << endl;
		system("cls");

		range = (int)abs(maxNum - minNum);
		cpuNum = rand() % range + minNum;

		for (int i = 10; i > 0; i--)
		{
			cout << "Make your guess: ";
			cin >> guessNum;
			cout << endl;

			if (cpuNum == guessNum)
			{
				cout << endl << "You got my number! You win!" << endl;
				break;
			}
			else if (cpuNum > guessNum)
			{
				cout << endl << "My number is higher than that!" << endl;
				cout << "You have " << i - 1 << " guesses left" << endl;
			}
			else if (cpuNum < guessNum)
			{
				cout << endl << "My number is lower than that!" << endl;
				cout << "You have " << i - 1 << " guesses left" << endl;
			}

			if ((i - 1) == 0)
				lost = true;

		}
		if (lost)
			cout << "You did not guess my number! It was: " << cpuNum << endl;

		cout << "Thanks for playing!" << endl;
	}
}

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

void playBattleShip();
void playBattleShip()
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
		startCol = rand() % 6,
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
	cout << " |    |  _/\\__  \\   __\\   __\\   | _/ __ \\ \\_____  \\ |  |  \\|  \\____ \\ " << endl;
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

		cout << endl << "Enter the row coordinate: ";
		cin >> rowCoord;
		cout << "Enter the column coordinate: ";
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
		{
			if (hitOrMiss)
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

int main()
{
	//////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	/////////////////////////////////VARIABLES AND INSTANTIATIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
    //////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	int gameChosen;

	srand(time(NULL));

	string playAgain;

	bool playArcade = true;

    //////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	/////////////////////////////////////////GAME PLAY\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
    //////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
	
	while(playArcade)
	{
		system("color 0A");
		system("cls");
		cout << "Welcome to..." << endl;
		cout << " ______   __     __        _______                     __        " << endl;
		cout << "|      |_|  |_ _|  |_     |   _   |.----.----.---.-.--|  |.-----." << endl;
		cout << "|   ---|_    _|_    _|    |       ||   _|  __|  _  |  _  ||  -__|" << endl;
		cout << "|______| |__|   |__|      |___|___||__| |____|___._|_____||_____|" << endl;
		cout << "                                                 .               " << endl;
		cout << "       __| |_____| |                             .               " << endl;
		cout << "       __   __<____|                            /^\\              " << endl;
		cout << "         | |                                                     " << endl << endl;
		cout << "1) Hangman" << endl;
		cout << "2) Tic-Tac-Toe" << endl;
		cout << "3) Number Guessing" << endl;
		cout << "4) Battleship" << endl;
		cin >> gameChosen;
		system("cls");


		switch (gameChosen)
		{
			case 1:
				system("color F0");
				playHangman();
				cout << "Want to play a different game? (Y/N)" << endl;
				cin >> playAgain;
				if (playAgain == "y" || playAgain == "Y")
					playArcade = true;
				else
					playArcade = false;

				break;

			case 2:
				system("color 3F");
				playTTT();
				cout << "Want to play a different game? (Y/N)" << endl;
				cin >> playAgain;
				if (playAgain == "y" || playAgain == "Y")
					playArcade = true;
				else
					playArcade = false;

				break;

			case 3:
				system("color E5");
				playNumber();
				cout << "Want to play a different game? (Y/N)" << endl;
				cin >> playAgain;
				if (playAgain == "y" || playAgain == "Y")
					playArcade = true;
				else
					playArcade = false;

				break;
			case 4:
				system("color 84");
				playBattleShip();
				cout << "Want to play a different game? (Y/N)" << endl;
				cin >> playAgain;
				if (playAgain == "y" || playAgain == "Y")
					playArcade = true;
				else
					playArcade = false;

				break;

			default:
				cout << "ERROR: Invalid Option";
				break;
		}
	}
}