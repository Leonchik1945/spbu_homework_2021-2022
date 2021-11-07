#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	int bbit = (a & (1 << b)) >> b; // чему равен первый бит
	int cbit = (a & (1 << c)) >> c; // чему равен второй бит

	a = a & (~(1 << b)); // извлекаем первый бит из числа
	a = a & (~(1 << c)); // извлекаем второй бит из числа

	a = a | (bbit << c) | (cbit << b); // вставляем биты наоборот

	cout << a << endl;

	return EXIT_SUCCESS;
}