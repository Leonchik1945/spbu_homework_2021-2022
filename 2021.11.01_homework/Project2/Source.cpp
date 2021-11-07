#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	double a = 0;

	cin >> a;

	long long int value = *((long long int*) & a);
	for (int i = 0; i < sizeof(long long int) * 8; ++i)
	{
		int CurrentBit = (sizeof(long long int) * 8 - 1 - i);
		long long int BitMask = 1;
		BitMask = BitMask << CurrentBit;
		long long int bit = value & BitMask;
		bit = bit >> CurrentBit;
		cout << (bool)bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}

	cout << endl;

	return EXIT_SUCCESS;
}