#include <iostream>
#include <algorithm>  
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n, i, kmax = 0, kmin = 0;
	int mas[10];
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	cout << "Введите массив:" << endl;

	for (int i = 0; i < n; i++) {
		cin >> mas[i];
		cin.ignore();
	}

	int max = mas[0];
	int min = mas[0];

	for (int i = 0;i < n;i++)
	{
		if (max > mas[i])
		{
			max = mas[i];
			kmax = i;
		}


		if (min < mas[i])
		{
			min = mas[i];
			kmin = i;
		}
	}
	int t = mas[kmax];
	mas[kmax] = mas[kmin];
	mas[kmin] = t;

	cout << "Максимальное число " << min << endl;
	cout << "Минимальное число " << max << endl;
	cin.get();

	for (int i = 0; i < n; i++) {
		cout << "  " << mas[i] << endl;
	}
	cin.get();
}