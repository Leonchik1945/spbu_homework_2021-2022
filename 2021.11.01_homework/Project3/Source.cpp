#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	double d = 0;
	cin >> d;
	long long int value = 0;
	value = *((long long int*) & d);
	long long int BitMask = 1;
	BitMask = BitMask << (sizeof(long long int) * 8 - 1);
	BitMask = ~BitMask;
	value = value & BitMask;
	double a = *((double*) & value);

	cout << a;

	return EXIT_SUCCESS;
}