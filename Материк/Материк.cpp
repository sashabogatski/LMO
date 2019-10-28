 #include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int r[50][50];

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 50; y++)
		{
			r[x][y] = 0;
		}
	}

	int x, y, k = 0;
	int e = 0;
	int n = 0;
	x = rand() % 44+2;
	y = rand() % 44+2;
	r[x][y] = 1;

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 50; y++)
		{
			if (r[x][y] == 0)
			{
				n++;
			}
			else e++;
		}
	}

	for (;e<n;)
	{
		e = 0;
		n = 0;
		for (int x = 0; x < 50; x++)
		{
			for (int y = 0; y < 50; y++)
			{
				if (r[x][y] == 1)
				{
					int o, a = 0;
					o = rand() % 3 - 1;
					a = rand() % 3 - 1;
					if (x + o == 0 || x + o == 49 || y + a == 0 || y + a == 49)
					{

					}
					else r[x + o][y + a] = 1;
				}
			}
		}
		for (int x = 0; x < 50; x++)
		{
			for (int y = 0; y < 50; y++)
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
		for (int y = 0; y < 50; y++)
		{
			if (r[x][y] == 0)
			{
				cout << "*";
			}
			else cout << "О";
		}
		cout << "\n";
	}

	return 0;
}