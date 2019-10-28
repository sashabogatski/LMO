#include <iostream>
using namespace std;

int main()
{
	int* key(int& Mur);
	int G;
	cin >> G;
	int TU = 0;
	for (int i = G; i >= 0; i /= 10)
	{
		TU++;
	}
	int Mur = TU;
	int* rak = new int[Mur];
	for (int i = Mur - 1; i >= 0; i--)
	{
		rak[i] = (G % 10);
		G /= 10;
	}
	return rak;
}