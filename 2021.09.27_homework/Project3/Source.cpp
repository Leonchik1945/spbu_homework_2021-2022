#include <iostream>;

using namespace std;

int main(int argv, char* argc[])
{
	int n = 0;

	cin >> n;

	for (int k = 1, i = 1; k <= n; ++i)
	{
		int s = i;
		while (s > 0 && k <= n)
		{
			cout << k << " ";
			++k;
			--s;
		}
		cout << endl;
	}
}