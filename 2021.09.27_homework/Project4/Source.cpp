#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int a = 1;
	int b = 1;
	int c = 1;

	cin >> n >> k;

	{
		for (int f = 1; f <= n; ++f)
		{
			a = a * f;
		}
	}
	{
		for (int f = 1; f <= k; ++f)
		{
			b = b * f;
		}
	}
	{
		for (int f = 1; f <= (n-k); ++f)
		{
			c = c * f;
		}
	}
	cout << (a) / (b * c) << endl;

	return EXIT_SUCCESS;
}
