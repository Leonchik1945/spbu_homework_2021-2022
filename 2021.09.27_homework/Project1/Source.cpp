#include <iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int f = 1;

	cin >> n;

	for (int a = 1; a <= n; ++a)
	{
		f = f * a;		
	}
	cout << f << endl;

	return EXIT_SUCCESS;
}
