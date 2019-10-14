#include <iostream> 
#include <time.h> 
using namespace std;
int main()
{
	srand(time(0));
	int i, z;
	int a[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int z = 0; z < 4; z++)
		{
			a[i][z] = rand() % 19 + 1;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int z = 0; z < 4; z++)
		{
			cout « a[i][z]«"\t";
		}
		cout « "\n";
	}
	return 0;
}