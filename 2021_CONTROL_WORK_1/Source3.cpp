#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int nok = 0;

	cin >> a >> b;

	int n = a;
	int m = b;
	while (n - m != 0)
	{
		if (n > m)
		{
			n -= m;
		}
		else
		{
			m -= n;
		}
	}
	nok = (a * b) / n;
	cout << nok;
	
	return EXIT_SUCCESS;
}