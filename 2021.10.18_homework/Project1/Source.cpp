#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 100;
	int length = 0;
	cin >> length;

	int liste[N] = { 0 };
	{
		for (int a = 0; a < length; ++a)
		{
			cin >> liste[a];
		}
	}
	{
		cout << "ARRAY : ";
		for (int b = 0; b < length; ++b)
		{
			cout << liste[b] << " ";
		}
		cout << endl;
	}
	{
		cout << "EVEN : ";
		for (int c = 0; c < length; ++c)
		{
			if (liste[c] % 2 == 0)
			{
				cout << liste[c] << " ";
			}
		}
		cout << endl;
	}
	{
		cout << "SUM : ";
		int sum = 0;
		for (int d = 0; d < length; ++d)
		{
			sum = sum + liste[d];
		}
		cout << sum << endl;
	}
	{
		cout << "PRODUCT OF NEGATIVE : ";
		int negprod = 1;
		for (int e = 0; e < length; ++e)
		{
			if (liste[e] < 0)
			{
				negprod = negprod * liste[e];
			}
		}
		cout << negprod << endl;
	}
	{
		cout << "FIRST MIN INDEX : ";
		int g = 0;
		while (liste[g] >= 0)
		{
			++g;
		}
		if (liste[g] < 0)
		{
			cout << g << " ";
		}
		cout << endl;
	}
	{
		cout << "SECOND MAX : ";
		int max = 0;
		int premax = 0;
		for (int h = 0; h < length; ++h)
		{
			if (liste[h] > max)
			{
				max = liste[h];
			}
		}
		for (int j = 0; j < length; ++j)
		{
			if ((liste[j] > premax) && (liste[j] != max))
			{
				premax = liste[j];
			}
		}
		cout << premax << endl;
	}
	{
		cout << "REVERSE : ";
		for (int k = length - 1; k >= 0; --k)
		{
			cout << liste[k] << " ";
		}
		cout << endl;
	}
	{
		cout << "ODD INDEXES : ";
		for (int i = 0; i < length; ++i)
		{
			if (i % 2 != 0)
			{
				cout << liste[i] << " ";
			}

		}
		cout << endl;
	}
	return EXIT_SUCCESS;
}