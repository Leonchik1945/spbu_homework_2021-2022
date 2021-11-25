#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int maxi = 0;
	int mini = 100;
	int capacity = 0;
	cin >> capacity;

	int* a = new int[capacity] { 0 };

	for (int i = 0; i < capacity; ++i)
	{
		cin >> a[i];
	}
	mini = a[0];
	maxi = a[0];
	for (int i = 0; i < capacity; ++i)
	{
		if (a[i] < mini)
		{
			mini = a[i];
		}
		if (a[i] > maxi)
		{
			maxi = a[i];
		}
	}
	for (int i = 0; i < capacity; ++i)
	{
		if (a[i] == maxi)
		{
			a[i] = mini;
		}
	}
	for (int i = 0; i < capacity; ++i)
	{
		cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}