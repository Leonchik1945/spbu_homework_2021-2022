#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	cin >> a >> b >> c >> d;

	if ((a == 0) && (b == 0))
	{
		cout << "INF" << endl;
	}
	if ((c == 0) && (d == 0))
	{
		cout << "NO" << endl;
	}
	return EXIT_SUCCESS;

}