#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int r[50][210];

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 210; y++)
		{
			r[x][y] = 0;
		}
	}

	int x, y, k = 0;
	int e = 0;
	int n = 0;
	x = rand() % 10 + 20;
	y = rand() % 70 + 70;
	r[x][y] = 1;

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 210; y++)
		{
			if (r[x][y] == 0)
			{
				n++;
			}
			else e++;
		}
	}

	for (;(e+8000) < n;)
	{
		e = 0;
		n = 0;
		for (int x = 0; x < 50; x++)
		{
			for (int y = 0; y < 210; y++)
			{
				if (r[x][y] == 1)
				{
					int o, a = 0;
					o = rand() % 3 - 1;
					a = rand() % 7 - 3;
					if (x + o == 0 || x + o == 49 || y + a == 2 || y + a == 207 || y + a == 0 || y + a == 208 || y + a == 1 || y + a == 209 || y + a == 210 || y + a == 3)
					{

					}
					else r[x + o][y + a] = 1;
				}
			}
		}
		for (int x = 0; x < 50; x++)
		{
			for (int y = 0; y < 210; y++)
			{
				if (r[x][y] == 0)
				{
					n++;
				}
				else e++;
			}
		}
	}

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 210; y++)
		{
			if (r[x][y] == 0)
			{
				cout << "H";
			}
			else cout << "*";
		}
		cout << "\n";
	}

	cout << "\n" << "Колличество воды: " << n << "\n" << "Колличество суши:" << e << "\n" << "Конец программы" << "\n";

	return 0;
}