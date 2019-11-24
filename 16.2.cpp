#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, i, j;
	int a = 0;
	int b = 0;
	cout << "Выведите размер массива: ";
	cin >> n;
	int* m = new int[n];
	cout << "Выведите элементы массива: ";
	for (i = 1; i <= n; i++)
		cin >> m[i];
	for (i = 1; i < n; i++) 
		for (j = i + 1; j <= n; j++)
			if (m[i] == m[j])
			{
				a++;
				if (a == 1)
				{
					b = b + 2;
					m[i] = 0;
					m[j] = 0;
				}
			}
	for (i = 1; i <= n; i++)
		if (m[i] != 0)
			cout << m[i] << " ";
	cout << endl;
	cout << "Размер преобразованного массива = " << n - b;
	return 0;
}


