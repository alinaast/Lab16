#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, i, l;
	int k = 1;
	cout << "Выведем размер массива: ";
	cin >> n;
	int* m = new int[n];
	cout << "Выведем элементы массива: ";
	for (i = 0; i < n; i++)
		cin >> m[i];
	for (i = 0; i < n; i++)
		if (m[i] > 0)
			k++;
	int* a = new int[n + k];
	for (i = 0; i < n; i++)
		for (l = 0; l < (n + k); l++)
		{
			a[l] = m[i];
			if (m[i] > 0)
			{
				a[l + 1] = 0;
				l++;
			}
		}
	cout << "Выведем проеобразованный массив: ";
	for (i = 0; i < ((n + k) - 1); i++)
		cout << a[i] << " ";
	return 0;
}

