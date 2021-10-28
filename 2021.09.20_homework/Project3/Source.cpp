#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	int t = 0;

	cin >> k >> m >> n;

	t = 2 * m * ((n + k - 1) / k);

	cout << t;

	return EXIT_SUCCESS;
}