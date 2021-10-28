#include <iostream>;

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;
	int s = 0;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int j = 0;
		cin >> j;
		s = s + j;
	}
	cout << s << endl;

	return EXIT_SUCCESS;
}