#include"mylib.h"
#include<iostream>

using namespace std;

int f(int n, int s)
{
	if (n <= 1)
	{
		return s;
	}
	else if (n % 2 == 0)
	{
		return f(n / 2, ++s);
	}
	else
	{
		return f(3 * n + 1, ++s);
	}
}

void circle(int r)
{
	if (r == 0)
	{
		cout << "*";
	}
	else
	{
		for (int i = 0; i <= 2 * r; ++i)
		{
			int j = 0;

			while ((i - r) * (i - r) + (j - r) * (j - r) > (r * r))
			{
				++j;
				cout << "  ";
			}
			cout << "*";

			while ((i - r) * (i - r) + (j - r) * (j - r) <= (r * r))
			{
				++j;
				cout << "  ";
			}
			cout << "*" << endl;
		}
	}
}