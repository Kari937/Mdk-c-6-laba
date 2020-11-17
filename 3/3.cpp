#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(NULL, "rus");
	int N, i, Sym = 0;
	cout << "Введите количество элементов: ";
	cin >> N;
	int a[10];
	for (i = 0;i < N;i++)
	{
		cout << "[" << i << "] элемент: ";
		cin >> a[i];
	}
	for (i = 0;i < N;i++)
	{
		cout << "[" << i << "]=" << a[i] << endl;
	}
	for (i = 0;i < N;i++)
	{
		Sym += a[i];
	}
	cout << "Сумма элементов=" << Sym<< endl;
}
