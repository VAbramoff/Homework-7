#include <iostream>
using namespace std;
void matrix(int* a, int d)
{
	for (int i = 0; i < d; i++)
	{
		a[i] = rand() % 100;
	}
}
void output(int* a, int d)
{
	for (int i = 0; i < d; i++)
	{
		cout << a[i] << "\t";
	}
}
void sborka(int* a1, int* a2, int d1, int d2)
{
	int j = 0;
	int k = 0;
	int* a3 = new int[d1 + d2];
	int* a4 = new int[k];
	for (int i = 0; i < d1; i++)
	{
		a3[i] = a1[i];
	}
	for (int i = d1; i < d1+d2; i++)
	{
		a3[i] = a2[j];
		j++;
	}
	cout << endl;
	for (int i =0; i < d1 + d2; i++)
	{
		j = 0;
		for (j; j < d1 + d2; j++)
		{
			if (a3[i] == a3[j] && i != j)
			{
				break;
			}
		}
		if (j == d1 + d2)
		{
			a4[k] = a3[i];
			k++;
		}
	}
	cout <<endl;
	for (int i = 0; i < k; i++)
	{
		cout << a4[i] << "\t";
	}
	delete[] a3;
	delete[] a4;
}
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int d1, d2;
	cout << "Введите длинну массива 1:";
	cin >> d1;
	cout << "Введите длинну массива 2:";
	cin >> d2;
	int* a1 = new int[d1];
	int* a2 = new int[d2];
	cout << "Массив 1:\n";
	matrix(a1, d1);
	output(a1, d1);
	cout << endl;
	cout << "Массив 2:\n";
	matrix(a2, d2);
	output(a2, d2);
	cout << endl;
	cout << "Массив с элементами не являющимися общими:\n";
	sborka(a1,a2,d1,d2);
	delete[] a1;
	delete[] a2;
}
