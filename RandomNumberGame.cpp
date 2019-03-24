#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
	//VARIABLES
	int minNum,
		maxNum,
		range,
		cpuNum,
		guessNum;

	bool lost = false;
	
	//GAMEPLAY
	cout << "Are you ready to play..." << endl;
	cout << "  _   _                 _                  ____                      " << endl;
	cout << " | \\ | |_   _ _ __ ___ | |__   ___ _ __   / ___| __ _ _ __ ___   ___ " << endl;
	cout << " |  \\| | | | | '_ ` _ \\| '_ \\ / _ \\ '__| | |  _ / _` | '_ ` _ \\ / _ \\ " << endl;
	cout << " | |\\  | |_| | | | | | | |_) |  __/ |    | |_| | (_| | | | | | |  __/" << endl;
	cout << " |_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|     \\____|\\__,_|_| |_| |_|\\___| " << endl;
	cout << "                                                                     " << endl;
	cout << "The computer is going to think of a number in a range you choose from. Can you guess it in 10 guesses?" << endl;
	cout << "Enter the MINIMUM number the computer can choose from : ";
	cin >> minNum;
	cout << endl;
	cout << "Enter the MAXIMUM number the computer can choose from : ";
	cin >> maxNum;
	cout << endl;

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