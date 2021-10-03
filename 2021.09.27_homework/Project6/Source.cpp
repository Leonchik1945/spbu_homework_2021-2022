#include <iostream>;

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	int pl = 0;
	int mi = 0;
	int nu = 0;
	int i = 0;

	cin >> n;

	for (int k = 1; k <= n; ++k)
	{
		cin >> i;
		if (i == 0)
		{
			++nu;
		}
		else if (i > 0)
		{
			++pl;
		}
		else
		{
			++mi;
		}

	}
	cout << pl << " " << mi << " " << nu << endl;
	return EXIT_SUCCESS;
}