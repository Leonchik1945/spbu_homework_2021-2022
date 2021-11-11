#include<iostream>;

using namespace std;

int main(int argc, char* argv[])
{
	bool exiting = false;
	setlocale(LC_ALL, "Russian");

	int capacity = 2;
	int count = 0;
	int* a = new int[capacity] { 0 };
	
	while (!exiting)
	{
		system("cls");
		cout << "Welcome! MENU:" << endl;
		cout << "0. Exit the program" << endl;
		cout << "1. Output of the current stay of the array" << endl;
		cout << "2. Add an element to the end of the array" << endl;
		cout << "3. Add an element to the beginning of the array" << endl;
		cout << "4. Remove an element from the end of the array" << endl;
		cout << "5. Remove an element from the beginning of the array" << endl;
		cout << "6. Expand the array" << endl;
		cout << "Input your choice:" << endl;

		char c = 0;
		cin >> c;

		switch (c)
		{
		case 48:
		{
			exiting = true;
			cout << endl;
			cout << "Bye!" << endl;
			break;
		}
		case 49:
		{
			if (count > 0)
			{
				for (int i = 0; i < count; ++i)
				{
					cout << a[i] << " ";
				}
				cout << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "There are no elements in the array!" << endl;
				system("pause");
				break;
			}
		}
		case 50:
		{
			++count;
			int number = 0;
			cout << "Input:" << endl;
			cin >> number;

			if (capacity < count)
			{
				capacity = capacity * 2;
			}
			int* b = new int[capacity * 2]{ 0 };
			for (int i = 0; i < capacity; ++i)
			{
				b[i] = a[i];
			}
			b[count - 1] = number;
			delete[] a;
			a = b;
			capacity = capacity * 2;
			
			cout << "Completed" << endl;
			system("pause");
			break;
		}
		case 51:
		{
			++count;
			int number = 0;
			cout << "Input:" << endl;
			cin >> number;

			if (capacity < count)
			{
				capacity = capacity * 2;
			}
			int* b = new int[capacity * 2]{ 0 };
			for (int i = 1; i < capacity; ++i)
			{
				b[i] = a[i-1];
			}
			b[0] = number;
			delete[] a;
			a = b;
			capacity = capacity * 2;

			cout << "Completed" << endl;
			system("pause");
			break;
		}
		case 52:
		{
			if (count > 0)
			{
				a[count - 1] = 0;
				count = count - 1;
				cout << "Completed" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "The array is already null!" << endl;
				system("pause");
				break;
			}
		}
		case 53:
		{
			if (count > 0)
			{
				int* b = new int[capacity] { 0 };
				for (int i = 0; i < count; ++i)
				{
					b[i] = a[i + 1];
				}
				delete[] a;
				a = b;
				count = count - 1;
				cout << "Completed" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "The array is already null!" << endl;
				system("pause");
				break;
			}
		}
		case 54:
		{
			if (count > 0)
			{
				int* b = new int[capacity] { 0 };
				for (int i = 0; i < count; ++i)
				{
					b[i] = a[count - i - 1];
				}
				delete[] a;
				a = b;
				cout << "Completed" << endl;
				system("pause");
				break;
			}
			else
			{
				cout << "There are no elements in the array!" << endl;
				system("pause");
				break;
			}
		}
		}
	}
	delete[] a;

	return EXIT_SUCCESS;
 }