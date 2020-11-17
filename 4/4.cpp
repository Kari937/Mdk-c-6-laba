#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	setlocale(NULL, "rus");
	cout << "Введите количество элементов:" << endl;
	size_t size;
	cin >> size;bool status = false;
	size_t index;int elem;
	int* arr = new int[size];
	for (size_t i = 0; i < size;++i)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
		if (status != true) 
		{
			elem = arr[0];
			index = i;
			status = true;
		}
		else if (elem > arr[i]) 
		{
			elem = arr[i];
			index = i;
		}
	}
	cout << endl << "Минимальный элемент: " << elem << " Индекс: " << index << endl;
}