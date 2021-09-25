#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;

	int h2 = 0;
	int m2 = 0;
	int s2 = 0;

	cout << "First time (hh, mm, ss):";
	cin >> h1 >> m1 >> s1;

	cout << "Second time (hh, mm, ss):";
	cin >> h2 >> m2 >> s2;

	cout << "Time interval in sec: " << (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

	return EXIT_SUCCESS;


}