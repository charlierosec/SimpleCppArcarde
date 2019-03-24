#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	string input[101];
	bool spin = true;
	int spins = rand() % 20 + 30,
		current = 0,
		entries;
	string response;

	cout << "How many entries will you enter (0 < && < 100)" << endl;
	cin >> entries;
	
	for (int i = 0; i < entries; i++)
	{
		cout << i + 1 << ") ";
		cin >> input[i];
	}
	while (spin)
	{
		for (int i = 0; i < spins; i++)
		{
			system("cls");
			current++;
			
			cout << "       |" << input[(current % entries)] << endl;
			cout << "       |" << input[((current + 1) % entries)] << endl;
			cout << " ----> |" << input[((current + 2) % entries)] << endl;
			cout << "       |" << input[((current + 3) % entries)] << endl;
			cout << "       |" << input[((current + 4) % entries)] << endl;

			if (i >= spins - (spins * 0.1))
			{
				this_thread::sleep_for(chrono::milliseconds(150));
			}
			else if (i >= 0.5 * (spins - (spins * 0.1)))
			{
				this_thread::sleep_for(chrono::milliseconds(200));
			}
			else
			{
				this_thread::sleep_for(chrono::milliseconds(100));
			}


		}
		cout << "Spin Again (Y/N)" << endl;
		cin >> response;
		if (response == "Y" || response == "y")
			spin = true;
		else
			spin = false;
	}
	
}