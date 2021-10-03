#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;

	{
		cin >> a;
		
		for (int b = 1; b <= a; ++b)
		{
			int r = b;
			int n = a;
			if (n % r == 0)
			{
				cout << r << " ";
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}
