#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;
	for (a; a <= b; ++a)
	{
		for (int n = 1; n <= a; ++n)
		{
			if (n * n == a)
			{
				cout << a << " ";
			}
		}
	}

	return EXIT_SUCCESS;
}
