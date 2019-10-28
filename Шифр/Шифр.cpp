#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	string locked;
	string unlocked;

	string command;

	cout << "Введите команду: ";
	cin >> command;
	if (command == "lock")
	{
		cout << "Введите выражение: ";
		cin >> locked;
		for (int j = 0; j < locked.length(); j++)
		{
			locked[j] +=4;
		}
		cout << "Шифр: " << locked << "\nГотово! \n";
		cout << "\nВведите команду: ";
		cin >> command;
	}

	if (command == "unlock")
	{
		cout << "Введите шифр: ";
		cin >> unlocked;
		for (int i = 0; i < unlocked.length(); i++)
		{
			unlocked[i]-=4;
		}
		cout << "Выражение: " << unlocked << "\nГотово! \n";
		cout << "\nВведите команду: ";
		cin >> command;
	}

	return 0;
}