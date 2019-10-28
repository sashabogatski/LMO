#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int A = 0;
	string S;
	cin >> S;
	wchar_t ksor;
	fstream X;
	int f = 0;
	X.open("1.txt", ios::in);
	int drug = 0;
	while (!X.eof())
	{
		if (!f || f==1)
		{
			ksor = X.get();
			wcout << ksor;
		}
		if (ksor == S[A])
		{
			f = 1;
			if (A+1 == S.length())
			{
				drug++;
				A = 0;
			}
			else A++;

		}
		else
		{
			if (f == 2)f = 0;
			if (f == 1)f = 2;
			A = 0;
		}
	}
	cout <<"\n" <<drug;
	X.close();
	return 0;
}
/*X << "Hello world!";
char ch[256];
X >> ch;
x.getline(ch, 256, '\n');*/