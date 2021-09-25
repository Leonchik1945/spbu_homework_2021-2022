#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;

	cin >> x;

	cout << (x % 10) + (x / 10 % 10) + (x / 100);

	return EXIT_SUCCESS;
}