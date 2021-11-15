#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 2;
	int maxi = 2;
	int mini = 2;
	int even = 2;

	while (cin >> n)
	{
		++even;
		if (even % 2 == 0)
		{
			if (n > maxi)
			{
				maxi = n;
			}
		}
		else
		{
			if (n < mini)
			{
				mini = n;
			}
		}
	}
	int result = maxi + mini;
	cout << result;

	return EXIT_SUCCESS;
}