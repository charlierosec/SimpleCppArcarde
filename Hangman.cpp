#include <iostream>
#include <string>
#include <time.h>
using namespace std;

//METHODS
void displayHangman(int hit);
void displayHangman(int hit)
{
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
		cout << "|                           \|//" << endl;
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
int main()
{
	//VARIABLES AND INSTANTIATION
	int hits = 0,
		gameMode;
	bool win = true,
		inWord = false;
	srand(time(NULL));

	string easyWords[7] = { "sofia", "stitch", "memes", "trash", "pacman", "minecraft", "pi"},
		   mediumWords[7] = {"id tech", "hippopatamus", "princeton", "wery wow", "parentheses", "bees?", "shia surprise"},
		   hardWord[7] = {"cats in hats", "birds with arms", "snakes in hats", "here come dat boi", "just do it", "donald trump's hair", "time is an illusion"},
		   extremeWords[3] = {"supercalifragilisticexpialidocious", "hippopotamonstraphobia", "when i was a young boy my father took me into the city to see a marching band"};

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
	if (gameMode == 1)
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
			displayGame(hits);
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
	else if(gameMode == 2)
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
			displayGame(hits);
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
		string word = hardWord[index],
			fullGuess = "";

		char theirGuess;
		int l = word.length();
		char guesses[100];
		for (int i = 0; i < l; i++)
			guesses[i] = '-';

		while (hits < 6)
		{
			displayGame(hits);
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
	else if (gameMode == 4)
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
			displayGame(hits);
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