#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int u = 0;

	cin >> a >> b;

	u = a;
	a = b;
	b = u;

	cout << a << " " << b;

	return EXIT_SUCCESS;

}