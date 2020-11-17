#include <iostream>
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	int arr[10];
	// Заполняем массив с клавиатуры
	for (int i = 0; i < 10; i++) 
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	// Выводим заполненный массив
	cout << "\nМассив: ";
	for (int i = 0; i < 10; ++i) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
