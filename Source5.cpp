#include<iostream>
#include<stdlib.h>

using namespace std;

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	cin >> a >> b;

	int* am = new int[a] { 0 };
	int* bm = new int[b] { 0 };

	for (int i = 0; i < a; ++i)
	{
		cin >> am[i];
	}
	cout << endl;
	for (int i = 0; i < b; ++i)
	{
		cin >> bm[i];
	}
	int c = b + a;
	int s = 1;
	int maxi = 0;
	int mini = 100000;
	int* cm = new int[c] { 0 };
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if (am[i] = bm[j])
			{
				cm[i] = am[i];
				s += 1;
			}
		}
	}
	/*for (int i = 0; i < s; ++i)
	{
		qsort(cm, 8, sizeof(int), comp1);
	}*/
	
	for (int i = 0; i < s; i++)
	{
		cout << cm[i] << " ";
	}

	return EXIT_SUCCESS;
}