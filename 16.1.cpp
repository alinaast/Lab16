#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int i, n;
	cout << "Вывести размер массива: ";
	cin >> n;
	int* m = new int[n];
	cout << "Вывести элементы массива: ";
	for (i = 1; i <= n; i++)
		cin >> m[i];
	cout << m[1];
	for (i = 2; i <= n; i++)
		if (m[i] != m[i - 1])
			cout << m[i];
	return 0;
}