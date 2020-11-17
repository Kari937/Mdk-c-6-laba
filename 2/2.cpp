#include <iostream>
using namespace std;
int main()
{
	const int N = 20;
	int mas[N] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, 15, -16, 17, -18, 19, -20};
	{
		for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
		cout << "\n";
		{
		for (int i = 0; i < N; i++)
		if (mas[i] < 0)
		mas[i] = 0;
		for (int i = 0; i < N; i++)
		cout << mas[i] << " ";
		}
	}
}