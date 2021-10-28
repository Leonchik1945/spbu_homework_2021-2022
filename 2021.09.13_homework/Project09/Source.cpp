#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;

	cin >> x;

	cout << x * (x + 1) * (x * x + 1) + 1;

	return EXIT_SUCCESS;
}