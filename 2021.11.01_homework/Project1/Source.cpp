#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	int bbit = (a & (1 << b)) >> b; // ���� ����� ������ ���
	int cbit = (a & (1 << c)) >> c; // ���� ����� ������ ���

	a = a & (~(1 << b)); // ��������� ������ ��� �� �����
	a = a & (~(1 << c)); // ��������� ������ ��� �� �����

	a = a | (bbit << c) | (cbit << b); // ��������� ���� ��������

	cout << a << endl;

	return EXIT_SUCCESS;
}