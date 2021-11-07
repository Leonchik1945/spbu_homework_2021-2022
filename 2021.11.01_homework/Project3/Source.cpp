#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	double r = 0;
	cin >> r;
	long long int value = 0;
	value = *((long long int*) & r);
	long long int BitMask = 1;
	BitMask = BitMask << (sizeof(long long int) * 8 - 1);
	BitMask = ~BitMask;
	value = value & BitMask;
	double a = *((double*) & value);

	cout << a;

	return EXIT_SUCCESS;
}