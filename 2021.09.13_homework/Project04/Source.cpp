#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int s = 109;
	int v = 0;
	int t = 0;

	cin >> v >> t;
	cout << ((s + v * t) % s) % s;

	return EXIT_SUCCESS;
}