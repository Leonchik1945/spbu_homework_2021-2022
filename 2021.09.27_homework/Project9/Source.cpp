#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;
	for (a; a <= b; ++a)
	{
		if (a % d == c)
		{
			cout << a << " ";
		}
	}

	return EXIT_SUCCESS;
}
