#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int f1 = 0;
	int f2 = 0;
	int p1 = 0;
	int p2 = 0;

	cin >> f1 >> f2 >> p1 >> p2;

	if ((f1 == p1) || (f2 == p2) || (abs(p1 - f1) == abs(p2 - f2)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}