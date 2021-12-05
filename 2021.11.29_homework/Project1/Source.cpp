#include<iostream>
#include"mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int r = 0;

	cout << "Enter the number: ";
	cin >> n;
	cout << f(n, s) << endl;

	cout << "Enter the radius: ";
	cin >> r;
	circle(r);

	return EXIT_SUCCESS;
}