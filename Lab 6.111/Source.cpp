#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void task(int* a, const int size)
{
	int count = 0;
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] > 0) && (a[i] % 3 == 0))
		{
			count++;
			suma += a[i];
			a[i] = 0;
		}
	}
	cout << "Count: " << count << endl;
	cout << "Suma: " << suma << endl;
}

int main()
{
	srand(time(0));

	const int n = 22;
	int a[n];

	int Low = -10;
	int High = 35;

	Create(a, n, Low, High);
	Print(a, n);

	task(a, n);
	Print(a, n);

	return 0;
}