﻿#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
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
	x = rand() % 50;
	y = rand() % 50;
	r[x][y] = 1;

	for (; k < 20; k++)
	{
		for (int x = 0; x < 50; x++)
		{
			for (int y = 0; y < 50; y++)
			{
				if (r[x][y] == 1)
				{
					int o, a = 0;
					o = rand() % 3 - 1;
					a = rand() % 3 - 1;
					r[x + o][y + a] = 1;
				}
			}
		}
	}

	for (int x = 0; x < 50; x++)
	{
		for (int y = 0; y < 50; y++)
		{
			if (r[x][y] == 0)
			{
				cout << " ";
			}
			else cout << "*";
		}
		cout << "\n";
	}
	return 0;
}