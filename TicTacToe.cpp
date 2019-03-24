#include <iostream>
#include <string>
using namespace std;

void displayTTT(int game[3][3]);
void displayTTT(int game[3][3])
{
	char temp[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if(game[i][j] == 1)
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

int main()
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

	while (gameMode == 1)
	{
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
	while (gameMode == 2)
	{
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

			while (board[colCoord-1][rowCoord-1] == 1 != 0)
			{
				colCoord = rand() % 3;
				rowCoord = rand() % 3;
			}
			board[rowCoord - 1][colCoord - 1] = -1;
			moves++;
			win = checkWin(board);
			if (win != 0) break;
		}
	}

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
