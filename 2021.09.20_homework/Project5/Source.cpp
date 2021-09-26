#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int x = 0;
	int s = 0;
	
	cin >> k;

	while (k != ((x * 4) - 4))
	{ 
		x = x + 1;
		if (k == (x * 4)) 
		{
			s = 1;
		}
	}
	if (s == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;

}