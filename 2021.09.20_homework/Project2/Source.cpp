#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int y = 0;
	cin >> y;

	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;
}