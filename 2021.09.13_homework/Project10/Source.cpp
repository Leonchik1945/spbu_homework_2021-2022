#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int mod = 0;
	int c = 0;

	cin >> a >> b;

	c = (a / b) * b + (b / a) * a;
	mod = (a % b) % a + (b % a) % b;
	c += mod;
	c = c / (c / (a + b) + 1);

	cout << c << endl;

	return EXIT_SUCCESS;
}