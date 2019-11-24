#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int max = -100000;
	int min = 100000;
	int n, i, a, b;
	cout << "Выведем размер массива: ";
	cin >> n;
	int* m = new int[n];
	cout << "Выведем эелементы массива: ";
	for (i = 1; i <= n; i++)
		cin >> m[i];
	for (i = 1; i <= n; i++)
	{
		if (m[i] > max)
		{
			max = m[i];
			a = i;
		}
		else
			if (m[i] < min)
			{
				min = m[i];
				b = i;
			}
	}
	for (i = 0; i < a; i++)
	{
		m[i] = m[i + 1];
		m[a - 1] = 0;
	}
	for (i = 0; i > b; i++)
	{
		m[i] = m[i - 1];
		m[b + 1] = 0;
	}
	for (i = 1; i <= n; i++)
		cout << m[i] << " ";
	return 0;
}
